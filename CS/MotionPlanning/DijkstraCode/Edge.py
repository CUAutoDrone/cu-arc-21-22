class Edge:
    """
    A class that represents an edge/neighbor

    Attributes:
        source: where the edge comes from
        sink: the neighbor (where the edge goes to)
        length: length of the edge
    """

    def __init__(self, source, sink, length):
        """Constructs a Edge object
           Precondition:
               source: tuple of size 2 (represents a valid gridpoint)
               sink: tuple of size 2 (represents a valid gridpoint)
               length: an real number greater than 0"""
        self.__source = source
        self.__sink = sink
        self.__length = length

    def getSource(self):
        """Returns the source of the edge"""
        return self.__source

    def getSink(self):
        """Returns the sink/neighbor"""
        return self.__sink

    def getLength(self):
        """Returns the length of the edge"""
        return self.__length
