from Grid import *
from Drone import *

class Test:

    def __init__(self):
        self.__grid = Grid(10, True)
        self.__size = self.__grid.getSize()
        self.__gridpoints = self.__grid.getGridPoints()
        self.runtestcases()

    def runtestcases(self):
        """Runs a suite of testcases"""

        with open('Test.txt', 'w') as f:
            f.write('')
            f.close()

        with open('Test.txt', 'a') as f:
            #Testcase 1
            self.testcase((0,0), (0,9), self.__grid, self.__size, self.__gridpoints, [], f, 1)

            #TestCase2
            self.testcase((0,0), (9,0), self.__grid, self.__size, self.__gridpoints, [], f, 2)

            #TestCase3
            self.testcase((0,0), (9,9), self.__grid, self.__size, self.__gridpoints, [], f, 3)

            #Testcase 4
            self.testcase((0,0), (3,7), self.__grid, self.__size, self.__gridpoints, [], f, 4)

            #Testcase 5
            self.testcase((0,0), (7,3), self.__grid, self.__size, self.__gridpoints, [], f, 5)

            #Testcase 6
            self.testcase((0,0), (3,2), self.__grid, self.__size, self.__gridpoints, [], f, 6)

            #Testcase 7
            self.testcase((0,0), (7,6), self.__grid, self.__size, self.__gridpoints, [], f, 7)

            #Testcase 8
            self.testcase((0,0), (9,0), self.__grid, self.__size, self.__gridpoints, [(8,0),(7,1),(6,1),(5,1),(5,2),(5,3),(5,4),(5,6),(5,7),(5,8),(5,9)], f, 8)

            #Testcase 9
            self.testcase((0,0), (9,0), self.__grid, self.__size, self.__gridpoints, [(8,0),(7,1),(6,1),(5,1),(5,2),(5,3),(5,4),(5,6),(5,7),(5,8),(5,9),(8,1)], f, 9)

            #Testcase 10
            self.testcase((0,0), (7,0), self.__grid, self.__size, self.__gridpoints, [(1,0),(1,1),(1,2),(1,4),(1,5),(1,7),(2,5),(2,7),(3,1),(3,2),(3,3),(3,4),(3,5),(4,1),(5,1),(5,3),(5,4),(5,5),(6,0),(6,1),(6,3),(7,3),(7,4),(7,5),(7,6),(7,7)], f, 10)

            #Testcase 11
            self.testcase((0,0), (9,9), self.__grid, self.__size, self.__gridpoints, [(1,2),(1,3),(1,4),(1,5),(1,6),(1,7),(1,8),(2,8),(3,8),(4,8),(5,8),(6,8),(7,8),(8,8),(8,7),(8,6),(8,5),(8,4),(8,3),(8,2),(8,1),(7,1),(6,1),(5,1),(4,1),(3,1),(2,1)], f, 11)

            #Testcase 12
            self.testcase((0,0), (9,9), self.__grid, self.__size, self.__gridpoints, [(0,1),(1,0),(1,1)], f, 12)

            #Testcase 13
            self.testcase((0,0), (9,9), self.__grid, self.__size, self.__gridpoints, [(1,1),(1,2),(1,4),(0,5),(0,7),(1,7),(1,8),(2,9),(3,0),(3,2),(3,5),(3,9),(4,2),(4,3),(4,6),(4,8),(5,1),(5,4),(5,6),(5,7),(5,8),(6,2),(6,3),(6,7),(6,8),(6,9),(7,2),(7,4),(7,8),(8,2),(8,7),(8,8),(9,3)], f, 13)

            #Testcase 14
            self.testcase((0,0), (9,0), self.__grid, self.__size, self.__gridpoints, [(1,1),(1,2),(1,4),(0,5),(0,7),(1,7),(1,8),(2,9),(3,0),(3,2),(3,5),(3,9),(4,2),(4,3),(4,6),(4,8),(5,1),(5,4),(5,6),(5,7),(5,8),(6,2),(6,3),(6,7),(6,8),(6,9),(7,2),(7,4),(7,8),(8,2),(8,7),(8,8),(9,3)], f, 14)

            #Testcase 15
            self.testcase((0,0), (0,9), self.__grid, self.__size, self.__gridpoints, [(1,1),(1,2),(1,4),(0,5),(0,7),(1,7),(1,8),(2,9),(3,0),(3,2),(3,5),(3,9),(4,2),(4,3),(4,6),(4,8),(5,1),(5,4),(5,6),(5,7),(5,8),(6,2),(6,3),(6,7),(6,8),(6,9),(7,2),(7,4),(7,8),(8,2),(8,7),(8,8),(9,3)], f, 15)

            #Testcase 16
            self.testcase((0,0), (8,3), self.__grid, self.__size, self.__gridpoints, [(1,1),(1,2),(1,4),(0,5),(0,7),(1,7),(1,8),(2,9),(3,0),(3,2),(3,5),(3,9),(4,2),(4,3),(4,6),(4,8),(5,1),(5,4),(5,6),(5,7),(5,8),(6,2),(6,3),(6,7),(6,8),(6,9),(7,2),(7,4),(7,8),(8,2),(8,7),(8,8),(9,3)], f, 16)

            #Testcase 17
            self.testcase((0,0), (7,1), self.__grid, self.__size, self.__gridpoints, [(1,1),(1,2),(1,4),(0,5),(0,7),(1,7),(1,8),(2,9),(3,0),(3,2),(3,5),(3,9),(4,2),(4,3),(4,6),(4,8),(5,1),(5,4),(5,6),(5,7),(5,8),(6,2),(6,3),(6,7),(6,8),(6,9),(7,2),(7,4),(7,8),(8,2),(8,7),(8,8),(9,3)], f, 17)

            #Testcase 18
            self.testcase((0,0), (0,6), self.__grid, self.__size, self.__gridpoints, [(1,1),(1,2),(1,4),(0,5),(0,7),(1,7),(1,8),(2,9),(3,0),(3,2),(3,5),(3,9),(4,2),(4,3),(4,6),(4,8),(5,1),(5,4),(5,6),(5,7),(5,8),(6,2),(6,3),(6,7),(6,8),(6,9),(7,2),(7,4),(7,8),(8,2),(8,7),(8,8),(9,3)], f, 18)

            #Testcase 19
            self.testcase((0,0), (5,9), self.__grid, self.__size, self.__gridpoints, [(1,1),(1,2),(1,4),(0,5),(0,7),(1,7),(1,8),(2,9),(3,0),(3,2),(3,5),(3,9),(4,2),(4,3),(4,6),(4,8),(5,1),(5,4),(5,6),(5,7),(5,8),(6,2),(6,3),(6,7),(6,8),(6,9),(7,2),(7,4),(7,8),(8,2),(8,7),(8,8),(9,3)], f, 19)

            #Testcase 20
            self.testcase((0,0), (7,9), self.__grid, self.__size, self.__gridpoints, [(1,1),(1,2),(1,4),(0,5),(0,7),(1,7),(1,8),(2,9),(3,0),(3,2),(3,5),(3,9),(4,2),(4,3),(4,6),(4,8),(5,1),(5,4),(5,6),(5,7),(5,8),(6,2),(6,3),(6,7),(6,8),(6,9),(7,2),(7,4),(7,8),(8,2),(8,7),(8,8),(9,3)], f, 20)

            #Testcase 21
            self.testcase((0,0), (7,7), self.__grid, self.__size, self.__gridpoints, [(1,1),(1,2),(1,4),(0,5),(0,7),(1,7),(1,8),(2,9),(3,0),(3,2),(3,5),(3,9),(4,2),(4,3),(4,6),(4,8),(5,1),(5,4),(5,6),(5,7),(5,8),(6,2),(6,3),(6,7),(6,8),(6,9),(7,2),(7,4),(7,8),(8,2),(8,7),(8,8),(9,3)], f, 21)

            #Testcase 22
            self.testcase((0,0), (0,4), self.__grid, self.__size, self.__gridpoints, [(1,1),(1,2),(1,4),(0,5),(0,7),(1,7),(1,8),(2,9),(3,0),(3,2),(3,5),(3,9),(4,2),(4,3),(4,6),(4,8),(5,1),(5,4),(5,6),(5,7),(5,8),(6,2),(6,3),(6,7),(6,8),(6,9),(7,2),(7,4),(7,8),(8,2),(8,7),(8,8),(9,3)], f, 22)

            #Testcase 23
            self.testcase((0,0), (4,0), self.__grid, self.__size, self.__gridpoints, [(1,1),(1,2),(1,4),(0,5),(0,7),(1,7),(1,8),(2,9),(3,0),(3,2),(3,5),(3,9),(4,2),(4,3),(4,6),(4,8),(5,1),(5,4),(5,6),(5,7),(5,8),(6,2),(6,3),(6,7),(6,8),(6,9),(7,2),(7,4),(7,8),(8,2),(8,7),(8,8),(9,3)], f, 23)

    def testcase(self, startpoint, endpoint, grid, size, gridpoints, obstacles, f, num):
        """Runs a singular testcase"""

        f.write('Testcase '+str(num)+':')
        f.write('\n')
        f.write('\n')
        grid.assignObstaclesManually(obstacles)
        f.write('Input Grid:')
        f.write('\n')
        for row in range(size):
            printrow = []
            for column in range(size):
                gridpoint = gridpoints[(row,column)]
                if gridpoint.getPassibility():
                    symbol = '='
                else:
                    symbol = '#'
                printrow.append(symbol)
            f.write(str(printrow))
            f.write('\n')
        drone = Drone(grid, startpoint)
        path = drone.shortestPath1(endpoint)
        f.write('Output Path for ' + str(drone.getStartPoint()) + ' to ' + str(endpoint)+':')
        f.write('\n')
        for row in range(size):
            printrow1 = []
            for column in range(size):
                gridpoint = gridpoints[(row,column)]
                if (row,column) in path:
                    symbol = 'D'
                elif gridpoint.getPassibility():
                    symbol = '='
                else:
                    symbol = '#'
                printrow1.append(symbol)
            f.write(str(printrow1))
            f.write('\n')
        if len(path) == 0:
            f.write('NO PATH TO ENDPOINT!!!')
            f.write('\n')
        f.write('\n')
        grid.reset()

#RUN TEST
test = Test()
