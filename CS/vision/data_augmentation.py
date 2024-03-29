from scipy import ndimage
import matplotlib.pyplot as plt
import numpy as np
from PIL import Image
import cv2
import xml.etree.ElementTree as ET
import math

def imread(filename):
    img = Image.open(filename)
    img = img.convert('RGB')
    img = np.array(img)
    img = img.astype(float)/255
    return img

def rotate_pixel(x, y, cx, cy, theta):
    tempX = x - cx
    tempY = y - cy
    theta = theta * math.pi / 180
    rotatedX = tempX * np.cos(theta) - tempY * np.sin(theta)
    rotatedY = tempX * np.sin(theta) + tempY * np.cos(theta)
    return [rotatedX + cx, rotatedY + cy]

def newxml(file_num,item_type, shiftx = None, shifty = None, theta = None, factor = None):
    new_file_name = 'mast_' + item_type + str(file_num) + '.png'
    xml_name = 'mast_' + str(file_num) + '.xml'
    new_xml_name = 'mast_' + item_type + str(file_num) + '.xml'

    tree = ET.parse(xml_name)
    root = tree.getroot()
    for filename in root.iter('filename'):
        filename.text = new_file_name
    
    for path in root.iter('path'):
        old = path.text
        i = old.rfind('/')
        path.text = old[:i + 1] + new_file_name

    # Get height and width of image
    for size in root.iter('size'):
        for width in root.iter('width'):
            max_width = int(width.text)
        for height in root.iter('height'):
            max_height = int(height.text)
    
    # Get center of images
    cx = max_width // 2
    cy = max_height // 2

    # Get points of bounding box
    for obj in root.iter('object'):
        for name in root.iter('name'):
            for bndbox in root.iter('bndbox'):
                for xmin in root.iter('xmin'):
                    x1 = int(xmin.text)
                for xmax in root.iter('xmax'):
                    x2 = int(xmax.text)
                for ymin in root.iter('ymin'):
                    y1 = int(ymin.text)
                for ymax in root.iter('ymax'):
                    y2 = int(ymax.text)

    # Translate
    if shiftx:
        for obj in root.iter('object'):
            for name in root.iter('name'):
                for bndbox in root.iter('bndbox'):
                    for xmin in root.iter('xmin'):
                        val = min(max((int(xmin.text) + shiftx), 0), max_width)
                        xmin.text = str(val)
                    for xmax in root.iter('xmax'):
                        val = min(max((int(xmax.text) + shiftx), 0), max_width)
                        xmax.text = str(val)
                    for ymin in root.iter('ymin'):
                        val = min(max((int(ymin.text) + shifty), 0), max_height)
                        ymin.text = str(val)
                    for ymax in root.iter('ymax'):
                        val = min(max((int(ymax.text) + shifty), 0), max_height)
                        ymax.text = str(val)
   
   # Rotate
    if theta:
        minx = max_width
        miny = max_height
        maxx = 0
        maxy = 0

        lst = []
        for xi in [x1, x2]:
            for yi in [y1, y2]:
                lst.append(rotate_pixel(xi, yi, cx, cy, theta))

        for i in lst:
            minx = min(i[0], minx)
            maxx = max(i[0], maxx)
            miny = min(i[1], miny)
            maxy = max(i[1], maxy)
        
        for obj in root.iter('object'):
            for name in root.iter('name'):
                for bndbox in root.iter('bndbox'):
                    for xmin in root.iter('xmin'):
                        val = min(max(minx, 0), max_width)
                        xmin.text = str(val)
                    for xmax in root.iter('xmax'):
                        val = min(max(maxx, 0), max_width)
                        xmax.text = str(val)
                    for ymin in root.iter('ymin'):
                        val = min(max(miny, 0), max_height)
                        ymin.text = str(val)
                    for ymax in root.iter('ymax'):
                        val = min(max(maxy, 0), max_height)
                        ymax.text = str(val)

    # Scale
    if factor:
        minx = (x1 - cx) * factor + cx
        miny = (y1 - cy) * factor + cy
        maxx = (x2 - cx) * factor + cx
        maxy = (y2 - cy) * factor + cy

        for obj in root.iter('object'):
            for name in root.iter('name'):
                for bndbox in root.iter('bndbox'):
                    for xmin in root.iter('xmin'):
                        val = min(max(minx, 0), max_width)
                        xmin.text = str(val)
                    for xmax in root.iter('xmax'):
                        val = min(max(maxx, 0), max_width)
                        xmax.text = str(val)
                    for ymin in root.iter('ymin'):
                        val = min(max(miny, 0), max_height)
                        ymin.text = str(val)
                    for ymax in root.iter('ymax'):
                        val = min(max(maxy, 0), max_height)
                        ymax.text = str(val)

    tree.write(new_xml_name)

# blur image with Gaussian filter
# higher filter size => more blurred
def blur(file_num, filter_size = 10):
    file_name = 'mast_' + str(file_num) + '.png'
    # Read image
    new_file_name = 'mast_0' + str(file_num) + '.png'
    # blur using kernel
    img = cv2.imread(file_name)
    kernel = np.ones((filter_size,filter_size),np.float32)/filter_size**2
    dst = cv2.filter2D(img,-1,kernel)
    # new picture
    cv2.imwrite(new_file_name, dst)
    # new xml
    newxml(file_num, '00')
    
# translate image by shiftx and shifty pixels
def translate(file_num, shiftx = 50, shifty = 50):
    file_name = 'mast_' + str(file_num) + '.png'
    new_file_name = 'mast_01' + str(file_num) + '.png'
    # Read image
    img = cv2.imread(file_name) 
    # The number of pixels
    num_rows, num_cols = img.shape[:2]
    translation_matrix = np.float32([ [1,0,shiftx], [0,1,shifty] ])
    img_translation = cv2.warpAffine(img, translation_matrix, (num_cols,num_rows))
    # new picture
    cv2.imwrite(new_file_name, img_translation)
    # new xml
    newxml(file_num, '01', shiftx, shifty)

def rotate(file_num, theta):
    file_name = 'mast_' + str(file_num) + '.png'
    new_file_name = 'mast_02' + str(file_num) + '.png'
    # Read image
    img = cv2.imread(file_name) 
    # The number of pixels
    num_rows, num_cols = img.shape[:2]

    w, h = 360, 640
    cX, cY = 360//2, 640//2
    M = cv2.getRotationMatrix2D((cX, cY), theta, 1.0)
    img_rotation = cv2.warpAffine(img, M, (w, h))
    
    # new picture
    cv2.imwrite(new_file_name, img_rotation)
    # new xml
    newxml(file_num, '02', None, None, -theta)

def scale(file_num, factor):
    file_name = 'mast_' + str(file_num) + '.png'
    new_file_name = 'mast_03' + str(file_num) + '.png'
    # Read image
    img = cv2.imread(file_name) 
    
    w = 360
    h = 640

    num_rows, num_cols = img.shape[:2]
    dim = (int(w * factor), int(h * factor)) #dimensions of new image

    # Scale up
    if factor > 1:
        img_rotation = cv2.resize(img, dim, interpolation = cv2.INTER_LINEAR)
        mid_h = int(h // 2 * factor)
        mid_w = int(w // 2 * factor)
        # Crop image to original size
        img_rotation = img_rotation[mid_h - h //2 : mid_h + h // 2, mid_w - w // 2 : mid_w + w // 2]
    # Scale down
    else:
        img_rotation = cv2.resize(img, dim, interpolation = cv2.INTER_AREA)
        top = (h - int(h * factor)) // 2
        bottom = (h - int(h * factor)) // 2 + (h - int(h * factor)) % 2
        left = (w - int(w * factor)) // 2
        right = (w - int(w * factor)) // 2 + (w - int(w * factor)) % 2
        color = list(cv2.mean(img))[:3] #average color
        # Pad image to original size
        img_rotation = cv2.copyMakeBorder(img_rotation, top, bottom, left, right, cv2.BORDER_CONSTANT,value=color) 
    # new picture
    cv2.imwrite(new_file_name, img_rotation)
    # new xml
    newxml(file_num, '03', factor = factor)

if __name__ == "__main__":
    # for i in range(556):
    #     try:
    #         #Because Eric won't rename them :(
    #         rotate(file_num)
    #     except:
    #         pass
    blur(552)
    translate(552, 123, 29)
    rotate(552, 10)
    scale(552, 0.75)
