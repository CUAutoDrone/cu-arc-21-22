class MinHeap:
    """
    A class that represents a min heap

    Attributes:
        maxsize: maximum size of the array
        map: a dictionary containing each element in the heap (key = element, value = (priority, index in array))
        heap: the actual array representing the Heap
        heapsize: the index after the last element in the min heap
    """

    def __init__(self, storagesize):
        """Constructs a MinHeap object
           Precondition: storagesize is an int greater than 0"""
        self.__maxsize = storagesize
        self.__map = {}
        self.__heap = [None]*storagesize
        self.__heapsize = 0

    def getHeap(self):
        """Returns the heap array"""
        return self.__heap

    def getHeapSize(self):
        """Returns the index after the last element in the heap"""
        return self.__heapsize

    def getMap(self):
        """Return the dictionary containing all the elements in the heap"""
        return self.__map

    def __bubbleUp(self, index):
        """Moves the element up (at the index) to its correct position
           Precondition: index is an int where 0<=index<=self.__heapsize-1"""
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
        """Moves the element down (at the index) to its correct position
           Precondition: index is an int where 0<=index<=self.__heapsize-1"""
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
        """Inserts the element value with priority "priority" into the MinHeap
           Precondition:
                value can be anything
                priority is an integer"""
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
        """Removes and returns the element at index 0 and adjusts the heap"""
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
        """Returns the element at index 0"""
        if self.__heapsize > 0:
            value = self.__heap[0]
            return value
        else:
            print('Heap is empty')

    def changePriority(self, element, priority):
        """Changes the priority of an element an adjusts the heap
           Precondition:
                element is within the heap
                priority is an integer"""
        index = self.__map[element][1]
        oldpriority = self.__map[element][0]
        self.__map[element] = (priority, index)
        if priority >= oldpriority:
            self.__bubbleDown(index)
        else:
            self.__bubbleUp(index)


    def print(self):
        """Prints out the min heap"""
        arr = []
        for value in self.__heap[0:self.__heapsize]:
            element = (value,self.__map[value][0])
            arr.append(element)
        print(arr)

