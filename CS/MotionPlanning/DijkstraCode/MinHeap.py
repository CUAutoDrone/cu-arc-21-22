class MinHeap:

    def __init__(self, storagesize):
        self.__maxsize = storagesize
        self.__map = {}
        self.__heap = [None]*storagesize
        self.__heapsize = 0

    def getHeap(self):
        return self.__heap

    def getHeapSize(self):
        return self.__heapsize

    def getMap(self):
        return self.__map

    def __bubbleUp(self, index):
        currentindex = index
        while currentindex > 0 and self.__map[self.__heap[currentindex]][0] < self.__map[self.__heap[(currentindex-1)//2]][0]:
            old1 = self.__heap[currentindex]
            old2 = self.__heap[(currentindex-1)//2]
            self.__heap[currentindex] = old2
            self.__heap[(currentindex-1)//2] = old1
            self.__map[old1] = (self.__map[old1][0], (currentindex-1)//2)
            self.__map[old2] = (self.__map[old2][0], currentindex)
            currentindex = (currentindex-1)//2

    def __bubbleDown(self, index):
        currentindex = index
        while (self.__heap[2*currentindex+1] != None and self.__map[self.__heap[currentindex]][0] > self.__map[self.__heap[2*currentindex + 1]][0]) or (self.__heap[2*currentindex+2] != None and self.__map[self.__heap[currentindex]][0] > self.__map[self.__heap[2*currentindex + 2]][0]):
            if self.__heap[2*currentindex+1] != None and self.__heap[2*currentindex+2] == None:
                old1 = self.__heap[currentindex]
                old2 = self.__heap[2*currentindex+1]
                self.__heap[currentindex] = old2
                self.__heap[2*currentindex+1] = old1
                self.__map[old1] = (self.__map[old1][0], 2*currentindex+1)
                self.__map[old2] = (self.__map[old2][0], currentindex)
                currentindex = 2*currentindex+1
            elif self.__heap[2*currentindex+2] != None and self.__heap[2*currentindex+1] == None:
                old1 = self.__heap[currentindex]
                old2 = self.__heap[2*currentindex+2]
                self.__heap[currentindex] = old2
                self.__heap[2*currentindex+2] = old1
                self.__map[old1] = (self.__map[old1][0], 2*currentindex+2)
                self.__map[old2] = (self.__map[old2][0], currentindex)
                currentindex = 2*currentindex+1
            elif self.__map[self.__heap[2*currentindex+1]][0] > self.__map[self.__heap[2*currentindex+2]][0]:
                old1 = self.__heap[currentindex]
                old2 = self.__heap[2*currentindex+2]
                self.__heap[currentindex] = old2
                self.__heap[2*currentindex+2] = old1
                self.__map[old1] = (self.__map[old1][0], 2*currentindex+2)
                self.__map[old2] = (self.__map[old2][0], currentindex)
            else:
                old1 = self.__heap[currentindex]
                old2 = self.__heap[2*currentindex+1]
                self.__heap[currentindex] = old2
                self.__heap[2*currentindex+1] = old1
                self.__map[old1] = (self.__map[old1][0], 2*currentindex+1)
                self.__map[old2] = (self.__map[old2][0], currentindex)
                currentindex = 2*currentindex+1
        self.__map[self.__heap[currentindex]] = (self.__map[self.__heap[currentindex]][0], currentindex)

    def insert(self, value, priority):
        try:
            dummy = self.__map[value]
            print('This value is already in the heap')
        except:
            if self.__heapsize < self.__maxsize:
                self.__heap[self.__heapsize] = value
                self.__map[value] = (priority, self.__heapsize)
                self.__bubbleUp(self.__heapsize)
                self.__heapsize = self.__heapsize+1
            else:
                print('Heap size is at a max')

    def pop(self):
        if self.__heapsize > 1:
            value = self.__heap[0]
            self.__heap[0] = self.__heap[self.__heapsize-1]
            self.__heap[self.__heapsize-1] = None
            self.__bubbleDown(0)
            self.__heapsize = self.__heapsize - 1
            self.__map.pop(value)
            return value
        elif self.__heapsize == 1:
            value = self.__heap[0]
            self.__heap[0] = None
            self.__heapsize = self.__heapsize - 1
            self.__map.pop(value)
            return value
        else:
            print('Heap is empty')

    def poll(self):
        if self.__heapsize > 0:
            value = self.__heap[0]
            return value
        else:
            print('Heap is empty')

    def changePriority(self, element, priority):
        index = self.__map[element][1]
        oldpriority = self.__map[element][0]
        self.__map[element] = (priority, index)
        if priority >= oldpriority:
            self.__bubbleDown(index)
        else:
            self.__bubbleUp(index)


    def print(self):
        value = self.__heap[0:self.__heapsize]
        print(value)
