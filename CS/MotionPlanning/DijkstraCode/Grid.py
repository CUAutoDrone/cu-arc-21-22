from GridPoint import *
from Edge import *
import random
import math

class Grid:
    """
    A class that represents an entire grid

    Attributes:
        gridpoints: a dicitonary of all the gridpoints in the grid
        size: number of rows and columns in the grid
        obstacles: a dictionary of all the gridpoints that are obstacles
    """

    def __init__(self, size):
        """Constructs a Grid object
           Precondition: size is an integer greater than 0"""

        self.__gridPoints = {}
        self.__size = size
        self.__setupGrid()
        self.__obstacles = self.__assignObstacles()


    def getGridPoints(self):
        """Returns the dictionary containing all the gridpoints"""
        return self.__gridPoints

    def getObstacles(self):
        """Returns the dictionary contain all obstacle gridpoints"""
        return self.__obstacles

    def printGrid(self):
        """Prints out the grid"""
        for row in range(self.__size):
            printrow = []
            for column in range(self.__size):
                gridpoint = self.__gridPoints[(row,column)]
                if gridpoint.getPassibility():
                    symbol = '='
                else:
                    symbol = '#'
                printrow.append(symbol)
            print(printrow)

    def getSize(self):
        """Returns the size of the grid (number of rows and columns)"""
        return self.__size

    def __setupGrid(self):
        """Creates the grid and assigns each gridpoint to the self.__gridpoints dictionary"""
        for row in range(self.__size):
            for column in range(self.__size):
                gridpoint = GridPoint((row,column))
                neighbors = self.__returnNeighbors(row,column,size)
                gridpoint.setNeighbors(neighbors)
                self.__gridPoints[(row,column)] = gridpoint

    def __assignObstacles(self):
        """Makes a random group of gridpoints into obstacles (1/3 of the gridpoints)"""
        obstacles = {}
        ready = 0
        while not ready:
            num = 0
            while num < (self.__size*self.__size)//3:
                row = random.randint(0, self.__size-1)
                column = random.randint(0, self.__size-1)
                gridpoint = self.__gridPoints[(row,column)]
                if gridpoint.getPassibility():
                    gridpoint.switchPassibility()
                    #print(gridpoint.getPassibility())
                    #print(num)
                    num = num+1
                    obstacles[(row,column)] = gridpoint
                    #self.__gridPoints[(row,column)] = gridpoint
            self.printGrid()
            answer = input("Are you ready?(Y/N): ")
            if answer == "Y":
                ready = 1
            else:
                self.__reset()

        return obstacles

    def __returnNeighbors(self, row, column):
        """Returns the neighbors of the gridpoing defined at (row,column)
           Precondition: 0<=row,column<=self.__size-1"""
        source = (row,column)
        if (row == 0):
            if (column == 0):
                neighbors = [Edge(source, (0,1), 1), Edge(source, (1,0), 1), Edge(source, (1,1), math.sqrt(2))]
            elif (column == self.__size-1):
                neighbors = [Edge(source, (0,column-1), 1), Edge(source, (1,column), 1), Edge(source, (1,column-1), math.sqrt(2))]
            else:
                neighbors = [Edge(source, (0, column-1), 1), Edge(source, (0, column+1), 1), Edge(source, (1, column), 1), Edge(source, (1, column-1), math.sqrt(2)), Edge(source, (1, column+1), math.sqrt(2))]
        elif (row == self.__size-1):
            if (column == 0):
                neighbors = [Edge(source, (row,1), 1), Edge(source, (row-1,0), 1), Edge(source, (row-1,1), math.sqrt(2))]
            elif (column == self.__size-1):
                neighbors = [Edge(source, (row,column-1), 1), Edge(source, (row-1,column), 1), Edge(source, (row-1,column-1), math.sqrt(2))]
            else:
                neighbors = [Edge(source, (row, column-1), 1), Edge(source, (row, column+1), 1), Edge(source, (row-1, column), 1), Edge(source, (row-1, column-1), math.sqrt(2)), Edge(source, (row-1, column+1), math.sqrt(2))]
        elif (column == 0):
            neighbors = [Edge(source, (row+1,0), 1), Edge(source, (row-1,0), 1), Edge(source, (row,1), 1), Edge(source, (row-1,1), math.sqrt(2)), Edge(source, (row+1,1), math.sqrt(2))]
        elif (column == self.__size-1):
            neighbors = [Edge(source, (row+1, column), 1), Edge(source, (row-1, column), 1), Edge(source, (row, column-1), 1), Edge(source, (row-1, column-1), math.sqrt(2)), Edge(source, (row+1, column-1), math.sqrt(2))]
        else:
            neighbors = [Edge(source, (row+1, column), 1), Edge(source, (row-1, column), 1), Edge(source, (row, column-1), 1), Edge(source, (row, column+1), 1), Edge(source, (row-1, column-1), math.sqrt(2)), Edge(source, (row+1, column+1), math.sqrt(2)), Edge(source, (row-1, column+1), math.sqrt(2)), Edge(source, (row+1, column-1), math.sqrt(2))]
        return neighbors

    def __reset(self):
        """Resets the grid by turning any obstacles into passible gridpoints"""
        for row in range(self.__size):
            for column in range(self.__size):
                gridpoint = self.__gridPoints[(row,column)]
                if not gridpoint.getPassibility():
                    gridpoint.switchPassibility()
