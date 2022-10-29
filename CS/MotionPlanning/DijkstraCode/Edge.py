class Edge:

    def __init__(self, source, sink, length):
        self.__source = source
        self.__sink = sink
        self.__length = length

    def getSource(self):
        return self.__source

    def getSink(self):
        return self.__sink

    def getLength(self):
        return self.__length
