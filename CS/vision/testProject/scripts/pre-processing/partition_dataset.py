import os
import re
from shutil import copyfile
import argparse
import math
import random

""" 
Usage: partition.py [-h] [-tr TRAIN] [-te TEST] [-x XML]

Partition dataset of pos_img into training and testing sets

optional arguments:
  -h, --help            show this help message and exit
  -tr --train           TRAIN
                        percentage of data for train. If not specified, defaults to 75.
  -te, --test           TEST
                        Percentage of data for test. If not specified, defaults to 25.
  -x, --xml             Set this flag if you want the xml annotation files to be processed and copied over.
"""


def iterate_dir(train, test, copy_xml):
    base = os.path.join(os.getcwd(), "workspace/training_demo")
    pos_img = os.path.join(base, "pos_img")
    train_dir = os.path.join(base, "train")
    test_dir = os.path.join(base, "test")

    if not os.path.exists(train_dir):
        os.makedirs(train_dir)

    if not os.path.exists(test_dir):
        os.makedirs(test_dir)

    images = [f for f in os.listdir(pos_img) if re.search(r'.+\.png', f)]

    num_images = len(images)

    num_test_images = math.floor(num_images * test / 100)
    num_train_images = num_images - num_test_images

    train = random.sample(range(0, num_images), num_train_images)
    test = list(set(range(0, num_images)) - set(train))

    for i in range(num_test_images):
        idx = test[i]
        filename = images[idx]
        copyfile(os.path.join(pos_img, filename),
                 os.path.join(test_dir, filename))
        if copy_xml:
            xml_filename = os.path.splitext(filename)[0]+'.xml'
            copyfile(os.path.join(pos_img, xml_filename),
                     os.path.join(test_dir, xml_filename))

    for i in range(num_train_images):
        idx = train[i]
        filename = images[idx]
        copyfile(os.path.join(pos_img, filename),
                 os.path.join(train_dir, filename))
        if copy_xml:
            xml_filename = os.path.splitext(filename)[0]+'.xml'
            copyfile(os.path.join(pos_img, xml_filename),
                     os.path.join(train_dir, xml_filename))


def main():

    parser = argparse.ArgumentParser(description="Partition dataset of pos_img into training and testing sets",
                                     formatter_class=argparse.RawTextHelpFormatter)
    parser.add_argument(
        '-tr', '--train',
        help='Percentage of data for training.',
        type=int,
        default=25
    )
    parser.add_argument(
        '-te', '--test',
        help='Percentage of data for testing.',
        type=int,
        default=75
    )
    parser.add_argument(
        '-x', '--xml',
        help='Set this flag if you want the xml annotation files to be processed and copied over.',
        action='store_true',
        default=True
    )
    args = parser.parse_args()

    iterate_dir(args.train, args.test, args.xml)


if __name__ == '__main__':
    main()