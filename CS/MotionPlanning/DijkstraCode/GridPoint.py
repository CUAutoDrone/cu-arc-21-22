class GridPoint:
    """
    A class that represents a gridpoint

    Attributes:
        position: tuple that represents the coordinates of the gridpoint
        passibility: represents whether the gridpoint is an obstacle or not
        neighbors: these are the neighbors of the gridpoint
    """

    def __init__(self, position):
        """Constructs a GridPoint object
           Precondition: position is a tuple of length 2 with integer elements"""
        self.__position = position
        self.__passibility = 1
        self.__neighbors = []

    def getPosition(self):
        """Returns position attribute of gridpoint"""
        return self.__position

    def getPassibility(self):
        """Returns if the gridpoint is passible or not"""
        return self.__passibility

    def getNeighbors(self):
        """Returns the neighbors of the gridpoint"""
        return self.__neighbors

    def switchPassibility(self):
        """Switches the passibility of the gridpoint"""
        if self.__passibility:
            self.__passibility = 0
        else:
            self.__passibility = 1

    def setNeighbors(self, neighbors):
        """Assigns neighbors to the gridpoint
           Precondition: neighbors is a non empty list of Edge objects """
        self.__neighbors = neighbors

    def equals(self, object):
        """Returns whether object is the same gridpoint as self"""
        if isinstance(object, GridPoint):
            if object.getPosition() == self.__position and object.getNeighbors() == self.__neighbors and object.getPassibility() == self.__passibility:
                return True
        return False

    def printPoint(self):
        """Prints the gridpoint as a = or #"""
        if self.__passibility:
            print('=')
        else:
            print('#')
