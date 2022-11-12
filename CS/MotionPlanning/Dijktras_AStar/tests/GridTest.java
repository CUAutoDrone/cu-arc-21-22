import static org.junit.jupiter.api.Assertions.*;

import java.util.Arrays;
import org.junit.jupiter.api.Test;

class GridTest {


    @Test
    void testFindPathDijkstras() {

        //test typical case
        Grid g = new Grid(10, 10);
        g.makeObstacle(1, 1);
        g.makeObstacle(2, 1);
        g.makeObstacle(1, 2);
        g.makeObstacle(1, 3);
        g.makeObstacle(8, 8);
        g.makeObstacle(8, 7);
        g.makeObstacle(7, 8);
        int[][] gPath = new int[][]{{0, 0}, {1, 0}, {2, 0}, {3, 1}, {4, 2}, {5, 3}, {6, 4}, {7, 5},
                {8, 6}, {9, 7}, {9, 8}, {9, 9}};
        int[][] reversed = new int[gPath.length][2];
        int k = gPath.length;
        for (int[] p : gPath) {
            k--;
            reversed[k] = p;
        }

        assertArrayEquals(gPath, g.findPathDijkstras(0, 0, 9, 9));
        assertArrayEquals(reversed, g.findPathDijkstras(9, 9, 0, 0));


        //test when many nodes have one adjacent
        int size = 9;
        Grid g1 = new Grid(size, size);
        for (int i = 1; i < size; i += 2) {
            for (int j = 1; j < size - 1; j++) {
                g1.makeObstacle(i, j);
            }
            if (i % 4 == 1)
                g1.makeObstacle(i, 0);
            if (i % 4 == 3)
                g1.makeObstacle(i, size - 1);
        }

        int[][] g1Path = new int[][]{{0, 0}, {0, 1}, {0, 2}, {0, 3}, {0, 4}, {0, 5}, {0, 6}, {0, 7}, {1, 8},
                {2, 7}, {2, 6}, {2, 5}, {2, 4}, {2, 3}, {2, 2}, {2, 1}, {3, 0},
                {4, 1}, {4, 2}, {4, 3}, {4, 4}, {4, 5}, {4, 6}, {4, 7}, {5, 8},
                {6, 7}, {6, 6}, {6, 5}, {6, 4}, {6, 3}, {6, 2}, {6, 1}, {7, 0},
                {8, 1}, {8, 2}, {8, 3}, {8, 4}, {8, 5}, {8, 6}, {8, 7}, {8, 8}};
        int[][] reversed1 = new int[g1Path.length][2];
        k = g1Path.length;
        for (int[] p : g1Path) {
            k--;
            reversed1[k] = p;
        }

        assertArrayEquals(g1Path, g1.findPathDijkstras(0, 0, 8, 8));
        assertArrayEquals(reversed1, g1.findPathDijkstras(8, 8, 0, 0));



        //test if a path only moving in one direction is correct
        Grid g2 = new Grid(5,5);
        int[][] g2Path = new int[][]{{3, 3}, {2,2}, {1,1}};//down left
        assertArrayEquals(g2Path, g2.findPathDijkstras(3, 3, 1, 1));

        g2Path = new int[][]{{3, 0}, {2,0}, {1,0}};//left
        assertArrayEquals(g2Path, g2.findPathDijkstras(3, 0, 1, 0));

        g2Path = new int[][]{{0, 3}, {0,2}, {0,1}};//down
        assertArrayEquals(g2Path, g2.findPathDijkstras(0, 3, 0, 1));

        g2Path = new int[][]{{1, 1}, {2,2}};//up right
        assertArrayEquals(g2Path, g2.findPathDijkstras(1, 1, 2, 2));

        g2Path = new int[][]{{2, 2}, {2,3}};//up
        assertArrayEquals(g2Path, g2.findPathDijkstras(2, 2, 2, 3));

        g2Path = new int[][]{{0, 0}, {0,1}};//right
        assertArrayEquals(g2Path, g2.findPathDijkstras(0, 0, 0, 1));

        g2Path = new int[][]{{1, 1}, {0,2}};// up left
        assertArrayEquals(g2Path, g2.findPathDijkstras(1, 1, 0, 2));

        g2Path = new int[][]{{1, 1}, {2,0}};//down right
        assertArrayEquals(g2Path, g2.findPathDijkstras(1, 1, 2, 0));

        g2Path = new int[][]{{0, 0},}; //test path from/to same point
        assertArrayEquals(g2Path, g2.findPathDijkstras(0, 0, 0, 0));



        //test impossible config, start trapped, end trapped

        g2.makeObstacle(1,1);
        g2.makeObstacle(1,0);
        g2.makeObstacle(0,1);

        assertArrayEquals(null, g2.findPathDijkstras(0, 0, 2, 2));
        assertArrayEquals(null, g2.findPathDijkstras(3, 3, 0, 0));



        //test if algorithm get "stuck" in one entrance cage
        Grid g3 = new Grid(12,12);

        int s = 10;
        for (int i = 5; i <= s;i ++){
            g3.makeObstacle(5,i);
            g3.makeObstacle(i,5);
            g3.makeObstacle(s,i);
            g3.makeObstacle(i,s);
        }
        g3.removeObstacle(5,5);
        g3.removeObstacle(5,6);
        g3.removeObstacle(6,5);
        g3.printPath(g3.findPathDijkstras(0,0,11,11));



    }

    @Test
    void testFindPathAStar() {
        Grid g = new Grid(10, 10);
        g.makeObstacle(1, 1);
        g.makeObstacle(2, 1);
        g.makeObstacle(1, 2);
        g.makeObstacle(1, 3);
        g.makeObstacle(8, 8);
        g.makeObstacle(8, 7);
        g.makeObstacle(7, 8);
        int[][] gPath = new int[][]{{0, 0}, {1, 0}, {2, 0}, {3, 1}, {4, 2}, {5, 3}, {6, 4}, {7, 5},
                {8, 6}, {9, 7}, {9, 8}, {9, 9}};
        int[][] reversed = new int[gPath.length][2];
        int k = gPath.length;
        for (int[] p : gPath) {
            k--;
            reversed[k] = p;
        }

        assertArrayEquals(gPath, g.findPathAStar(0, 0, 9, 9));
        assertArrayEquals(reversed, g.findPathAStar(9, 9, 0, 0));


        int size = 9;
        Grid g1 = new Grid(size, size);
        for (int i = 1; i < size; i += 2) {
            for (int j = 1; j < size - 1; j++) {
                g1.makeObstacle(i, j);
            }
            if (i % 4 == 1)
                g1.makeObstacle(i, 0);
            if (i % 4 == 3)
                g1.makeObstacle(i, size - 1);
        }

        int[][] g1Path = new int[][]{{0, 0}, {0, 1}, {0, 2}, {0, 3}, {0, 4}, {0, 5}, {0, 6}, {0, 7}, {1, 8},
                {2, 7}, {2, 6}, {2, 5}, {2, 4}, {2, 3}, {2, 2}, {2, 1}, {3, 0},
                {4, 1}, {4, 2}, {4, 3}, {4, 4}, {4, 5}, {4, 6}, {4, 7}, {5, 8},
                {6, 7}, {6, 6}, {6, 5}, {6, 4}, {6, 3}, {6, 2}, {6, 1}, {7, 0},
                {8, 1}, {8, 2}, {8, 3}, {8, 4}, {8, 5}, {8, 6}, {8, 7}, {8, 8}};
        int[][] reversed1 = new int[g1Path.length][2];
        k = g1Path.length;
        for (int[] p : g1Path) {
            k--;
            reversed1[k] = p;
        }

        assertArrayEquals(g1Path, g1.findPathAStar(0, 0, 8, 8));
        assertArrayEquals(reversed1, g1.findPathAStar(8, 8, 0, 0));

        //test if a path only moving in one direction is correct
        Grid g2 = new Grid(5,5);
        int[][] g2Path = new int[][]{{3, 3}, {2,2}, {1,1}};//down left
        assertArrayEquals(g2Path, g2.findPathDijkstras(3, 3, 1, 1));

        g2Path = new int[][]{{3, 0}, {2,0}, {1,0}};//left
        assertArrayEquals(g2Path, g2.findPathDijkstras(3, 0, 1, 0));

        g2Path = new int[][]{{0, 3}, {0,2}, {0,1}};//down
        assertArrayEquals(g2Path, g2.findPathDijkstras(0, 3, 0, 1));

        g2Path = new int[][]{{1, 1}, {2,2}};//up right
        assertArrayEquals(g2Path, g2.findPathDijkstras(1, 1, 2, 2));

        g2Path = new int[][]{{2, 2}, {2,3}};//up
        assertArrayEquals(g2Path, g2.findPathDijkstras(2, 2, 2, 3));

        g2Path = new int[][]{{0, 0}, {0,1}};//right
        assertArrayEquals(g2Path, g2.findPathDijkstras(0, 0, 0, 1));

        g2Path = new int[][]{{1, 1}, {0,2}};// up left
        assertArrayEquals(g2Path, g2.findPathDijkstras(1, 1, 0, 2));

        g2Path = new int[][]{{1, 1}, {2,0}};//down right
        assertArrayEquals(g2Path, g2.findPathDijkstras(1, 1, 2, 0));

        g2Path = new int[][]{{0, 0},}; //test path from/to same point
        assertArrayEquals(g2Path, g2.findPathDijkstras(0, 0, 0, 0));


        g2.makeObstacle(1,1);
        g2.makeObstacle(1,0);
        g2.makeObstacle(0,1);

        assertArrayEquals(null, g2.findPathAStar(0, 0, 2, 2));
        assertArrayEquals(null, g2.findPathAStar(3, 3, 0, 0));

        Grid g3 = new Grid(15,15);

        int s = 10;
        for (int i = 5; i <= s;i ++){
            g3.makeObstacle(5,i);
            g3.makeObstacle(i,5);
            g3.makeObstacle(s,i);
            g3.makeObstacle(i,s);
        }
        g3.removeObstacle(5,5);
        g3.removeObstacle(5,6);
        g3.removeObstacle(6,5);
        g3.printPath(g3.findPathAStar(0,0,14,14));
        g3.printPath(g3.findPathAStar(3,3,14,8));
        g3.printPath(g3.findPathAStar(7,7,12,10));

        Grid g4 = new Grid(10,10);
        for(int i = 0; i < 9; i ++){
            g4.makeObstacle(8,i);
        }

        int[][] g4path = new int[18][2];
        for (int i = 0; i < 9; i++){
            g4path[i] = new int[] {i,9};
        }
        for (int i = 0; i < 9; i++){
            g4path[i+9] = new int[] {9,8-i};
        }

        assertArrayEquals(g4path,g4.findPathAStar(0,9,9,0));
    }


}