from Grid import *
from GridPoint import *
from Edge import *
from MinHeap import *
import math

class Drone:
    """
    A class that represents the drone

    Attributes:
        grid: the dictionary containing all the gridpoints from a Grid Object
        size: number of columns and rows in the grid
        startpos = starting position of the drone (a tuple)
    """

    def __init__(self, grid):
        """Constructs a Grid object
           Precondition: grid is a Grid object"""
        self.__grid = grid.getGridPoints()
        self.__size = grid.getSize()
        self.__startpos = (0,0)

    # Dijkstra's Algorithm
    def shortestPath1(self, endpoint):
        """Returns the shortest path between the start position and endpoint
           Precondition: endpoint is a tuple representing a gridpoint that exists on the grid"""
        SandF = {}
        F = MinHeap(self.__size*self.__size)
        F.insert(self.__startpos, 0)
        SandF[self.__startpos] = (0, None)
        while(F.getHeapSize()>0):
            f = F.pop()
            #if f == endpoint:
            #    return self.__showpath(SandF, endpoint)
            fdist = (SandF[f])[0]
            for neighbor in self.__grid[f].getNeighbors():
                other = neighbor.getSink()
                if self.__grid[other].getPassibility():
                    wdist = fdist + neighbor.getLength()
                    if not (other in SandF.keys()):
                        SandF[other] = (wdist, f)
                        F.insert(other, wdist)
                    elif SandF[other][0]>wdist:
                        SandF[other] = (wdist, f)
                        if other in F.getHeap():
                            F.changePriority(other, wdist)
                        else:
                            F.insert(other,wdist)
        try:
            return self.__showpath(SandF, endpoint)
        except:
            print("No path to endpoint!")
            return []

    def __showpath(self, dict, endpoint):
        """Returns the path from starting position to endpoint
           Precondition:
                dict: is a nonempty dictionary of all settled and frontier nodes (key = tuple that represents a gridpoint, value = (shortest distance to, backpointer))
                endpoint: a tuple that represents a valid gridpoint on the grid"""
        path = [endpoint]
        prev = dict[endpoint][1]
        while prev != None:
            path = [prev] + path
            prev = dict[prev][1]
        return path

    def printPath(self, path):
        """Displays the shortest path represented by path
           Precondition: path is a list of tuples representing the gridpoints in the shortest path"""
        for row in range(self.__size):
            printrow = []
            for column in range(self.__size):
                gridpoint = self.__grid[(row,column)]
                if (row,column) in path:
                    symbol = 'D'
                elif gridpoint.getPassibility():
                    symbol = '='
                else:
                    symbol = '#'
                printrow.append(symbol)
            print(printrow)
