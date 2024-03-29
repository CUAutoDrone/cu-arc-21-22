import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.PriorityQueue;

public class Grid {

    private final int dDist = 14; //diagonal distance edge weight
    private final int oDist = 10; //orthogonal distance edge weight

    private final int[][] adjacent = {{1,1,dDist}, {-1,1,dDist},{0,1,oDist},{1,0,oDist},
            {-1,0,oDist},{0,-1,oDist},{1,-1,dDist},{-1,-1,dDist}};


    /** Represents the grid, true if the point is traversable and
     * false if the point is not traversable.
     */
    boolean[][] gridPoints;

    /** Represents the x and y size of the grid, if 0 <= x < xSize and 0 <= y < ySize
     * then the point x,y is in the grid.
     */
    int xSize;
    int ySize;

    /**Creates a grid of dimension xDim by yDim indexed at 0,
     * x is valid from 0..xDim-1
     * y is valid from 0..yDim-1
     */
    public Grid(int xDim, int yDim){
        xSize = xDim;
        ySize = yDim;
        gridPoints = new boolean[xDim][yDim];
        for(boolean[] row : gridPoints)
            Arrays.fill(row, true);
    }

    /** Effect: makes the point at x,y untraversable
     * Requires: x,y is a point in the grid.
     */
    public void makeObstacle(int x, int y){
        gridPoints[x][y] = false;
    }

    /** Effect: makes the point at x,y traversable
     * Requires: x,y is a point in the grid.
     */
    public void removeObstacle(int x, int y){
        gridPoints[x][y] = true;
    }

    /** Returns: true if the point at x,y traversable otherwise false
     * Requires: x,y is a point in the grid.
     */
    public boolean isTraversable(int x, int y){
        return gridPoints[x][y];
    }

    /** Finds the shortest path between two points using traversable points only
     * where diagonal movement is allowed but weighted by sqrt(2)*orthogonal movement
     *
     * Returns: A 2D array representing the shortest path between the start coordinate
     * and the end coordinate. The array contains arrays of length 2 of the form [x, y]
     * representing the point x,y. Returns null if no path exists
     *
     * Requires: startX,startY endX,endY are both points on the grid.
     */



    public int[][] findPathDijkstras(int startX, int startY, int endX, int endY){

        HashMap<Point, Point> points = new HashMap<>();
        PriorityQueue<Point> q = new PriorityQueue<>(1,
                Comparator.comparingInt(o -> o.dist));


        Point current = new Point(startX, startY, 0);
        points.put(current,current);

        while (current != null) {

            for (int[] direction : adjacent) {
                int newX = current.getX() + direction[0];
                int newY = current.getY() + direction[1];
                try {
                    Point p = new Point(newX, newY, Integer.MAX_VALUE);
                    Point get = points.get(p);
                    if (get == null){
                        points.put(p,p);
                    }else{
                        p = points.get(p);
                    }
                    if (gridPoints[newX][newY]){
                        int newDist = current.dist + direction[2];
                        if (p.dist > newDist) {
                            p.dist = newDist;
                            p.previous = current;
                            q.add(p);
                        }
                    }
                } catch (IndexOutOfBoundsException ignored) {
                }
            }

            //if its reached the end point and searched, it has found the shortest path
            if (current.getX() == endX && current.getY() == endY)
                return buildPath(points.get(new Point(endX, endY)));


            //find the lowest distance point that hasn't been visited
            current = q.poll();
        }
        return null;

    }


    /** Finds the shortest path between two points using traversable points only
     * where diagonal movement is allowed but weighted by sqrt(2)*orthogonal movement
     *
     * Returns: A 2D array representing the shortest path between the start coordinate
     * and the end coordinate. The array contains arrays of length 2 of the form [x, y]
     * representing the point x,y. Returns null if no path exists
     *
     * Requires: startX,startY endX,endY are both points on the grid.
     */
    public int[][] findPathAStar(int startX, int startY, int endX, int endY){

        /*PriorityQueue<AStarPoint> open = new PriorityQueue<>(1, (o1,o2) -> {
            int c = Integer.compare(o1.fCost(),o2.fCost());
            if (c == 0)
                return Integer.compare(o1.hCost, o2.hCost);
            return c;
        });
        */


        PriorityQ<AStarPoint> open = new PriorityQ<>((o1,o2) -> {
            int c = Integer.compare(o1.fCost(),o2.fCost());
            if (c == 0)
                return Integer.compare(o1.hCost, o2.hCost);
            return c;
        });
        //double[] time = new double[40];

        HashSet<AStarPoint> closed = new HashSet<>();

        HashMap<AStarPoint,AStarPoint> store = new HashMap<>();


        AStarPoint current = new AStarPoint(startX,startY);
        current.gCost = 0;
        open.add(current);

        //long i = 0;
        while (open.size() > 0){
            //i++;

            //time[0] -= (double)System.nanoTime()/1000000000;

            current = open.poll();
            //time[0] += (double)System.nanoTime()/1000000000;

            //time[1] -= (double)System.nanoTime()/1000000000;
            closed.add(current);
            //time[1] += (double)System.nanoTime()/1000000000;



            if (current.getX() == endX && current.getY() == endY) {
                //System.out.println(i);
                /*System.out.println("time stuff");
                for (int j = 0; j < time.length; j++){
                    if (time[j] != 0)
                        System.out.println(j+" "+time[j]);
                }*/
                return buildPath(current); //1.7ms for 10,000 with square
            }

            for (int[] direction : adjacent) {
                int newX = current.getX() + direction[0];
                int newY = current.getY() + direction[1];
                try {
                    if (gridPoints[newX][newY]) {
                        //time[10] -= (double)System.nanoTime()/1000000000;
                        AStarPoint p = new AStarPoint(newX, newY);
                        //time[10] += (double)System.nanoTime()/1000000000;


                        //time[11] -= (double)System.nanoTime()/1000000000;
                        store.putIfAbsent(p, p);
                        //time[11] += (double)System.nanoTime()/1000000000;


                        //time[12] -= (double)System.nanoTime()/1000000000;
                        p = store.get(p);
                        //time[12] += (double)System.nanoTime()/1000000000;

                        int newDist = current.gCost + direction[2];


                        //time[20] -= (double)System.nanoTime()/1000000000;
                        //if () {
                            //time[20] += (double)System.nanoTime()/1000000000;
                            //continue;
                        //}
                        //time[20] += (double)System.nanoTime()/1000000000;

                        //time[30] -= (double)System.nanoTime()/1000000000;'
                        if (closed.contains(p) && newDist >= p.gCost) continue;
                        if (newDist < p.gCost) {//!open.contains(p) ||
                            p.gCost = newDist;
                            p.hCost = getDist(p.getX(), p.getY(), endX, endY);
                            p.previous = current;
                            open.add(p);
                        }
                        //time[30] += (double)System.nanoTime()/1000000000;
                    }

                } catch (IndexOutOfBoundsException ignored) {
                }
            }
        }

        return null;
    }


    public int[][] findPathFast(int startX, int startY, int endX, int endY){
        ASPController controller = new ASPController(startX,startY,endX,endY,oDist,dDist);

        while (true){
            int[] current = controller.getNext();
            if (current == null) return null;
            if (current[0] == endX && current[1] == endY)
                return controller.buildPath(current);

            for (int i = 0; i < 8; i ++) {
                int[] direction = adjacent[i];
                int newX = current[0] + direction[0];
                int newY = current[1] + direction[1];
                try {
                    if (gridPoints[newX][newY]) {
                        int gCost = controller.gCost(newX,newY);
                        int newDist = current[2] + direction[2];
                        if (newDist >= gCost && controller.inClosed(newX,newY))
                            continue;
                        if (newDist < gCost) {
                            controller.updatePoint(newX,newY,newDist,i);
                        }
                    }

                } catch (IndexOutOfBoundsException ignored) {
                }
            }
        }
    }


    public int[][] findPathJPS(int startX, int startY, int endX, int endY){
        PriorityQueue<AStarPoint> open = new PriorityQueue<>(1,
                Comparator.comparingInt(AStarPoint::fCost).thenComparingInt(o -> o.hCost));
        HashSet<AStarPoint> closed = new HashSet<>();
        HashMap<AStarPoint,AStarPoint> store = new HashMap<>();


        AStarPoint current = new AStarPoint(startX,startY);
        current.gCost = 0;
        open.add(current);

        while (open.size() > 0){

            current = open.poll();
            while (closed.contains(current)){
                current = open.poll();
            }
            closed.add(current);

            if (current.getX() == endX && current.getY() == endY) return buildPath(current);

            for (int[] direction : adjacent) {
                int[] jump = jump(current.getX(),current.getY(),
                        endX,endY,new int[] {direction[0],direction[1]});
                if (jump == null) {
                    continue;
                }
                int newX = jump[0];
                int newY = jump[1];
                try {
                    if (gridPoints[newX][newY]) {
                        AStarPoint p = new AStarPoint(newX, newY);
                        store.putIfAbsent(p, p);
                        p = store.get(p);
                        int newDist = current.gCost + getDist(current.getX(), current.getY(), newX,newY);
                        if (closed.contains(p) && newDist >= p.gCost)
                            continue;
                        if (newDist < p.gCost) {
                            p.gCost = newDist;
                            p.hCost = getDist(p.getX(), p.getY(), endX, endY);
                            p.previous = current;
                            //if (!open.contains(p)) {
                            open.add(p);
                            //}
                        }
                    }

                } catch (IndexOutOfBoundsException ignored) {
                }
            }
        }
        return null;
    }

    private int[] jump(int x, int y, int endX, int endY, int[] d){
        x += d[0];
        y += d[1];

        try {
            if (!gridPoints[x][y]) return null;
        }catch (IndexOutOfBoundsException e){
            return null;
        }

        if (x == endX && y == endY) return new int[] {x,y};

        if (Math.abs(d[0]) == Math.abs(d[1])) { //diagonal
            try {
                if (!gridPoints[x - d[0]][y])
                    return new int[]{x, y};
            }catch (IndexOutOfBoundsException ignored){}
            try {
                if (!gridPoints[x][y - d[1]])
                    return new int[]{x, y};
            }catch (IndexOutOfBoundsException ignored){}

            if (jump(x, y, endX, endY, new int[]{0, d[1]}) != null)
                return new int[]{x, y};
            if (jump(x, y, endX, endY, new int[]{d[0], 0}) != null)
                return new int[]{x, y};


        } else { //orthogonal
            try {
                if (!gridPoints[x + d[1]][y + d[0]])
                    return new int[]{x, y};
            }catch (IndexOutOfBoundsException ignored){}
            try {
                if (!gridPoints[x - d[1]][y - d[0]])
                    return new int[]{x, y};
            }catch (IndexOutOfBoundsException ignored){}
        }

        return jump(x,y,endX,endY,d);
    }

    /** Prints a representation of the grid and the path through that grid.
     *
     * Effect: Prints the grid that shows untraversable points and the ordered path that's given
     * as a parameter.
     * Ex. for a 10x10 grid with a blocked point at 1,1  1,2 and 2,1 and the shortest path from 0,0 to 5,5
     * the representation look like:
     9|__|__|__|__|__|__|__|__|__|__|
     8|__|__|__|__|__|__|__|__|__|__|
     7|__|__|__|__|__|__|__|__|__|__|
     6|__|__|__|__|__|__|__|__|__|__|
     5|__|__|__|5 |6 |7 |__|__|__|__|
     4|__|__|4 |__|__|__|__|__|__|__|
     3|__|3 |__|__|__|__|__|__|__|__|
     2|2 ||||__|__|__|__|__|__|__|__|
     1|1 |||||||__|__|__|__|__|__|__|
     0|0 |__|__|__|__|__|__|__|__|__|
     0  1  2  3  4  5  6  7  8  9
     || represents untraversable points
     __ represents traversable points

     * If the path is not valid (i.e. uses untraversable points or points not in grid) then
     Invalid path
     is printed
     */
    public void printPath(int[][] path){
        String[][] toPrint = new String[xSize][ySize];
        int i = 0;
        for(int[] p : path){
            try{
                if (!isTraversable(p[0],p[1])){
                    System.out.println("Invalid path");
                    return;
                }
            }catch (IndexOutOfBoundsException exc){
                System.out.println("Invalid path");
                return;
            }
            toPrint[xSize-1-p[1]][p[0]] = "|"+i;
            if (i < 10) toPrint[xSize-1-p[1]][p[0]] += " ";
            i++;
        }
        for (int x = 0; x <= xSize; x++){
            for(int y = -1; y < ySize; y++){
                String out = null;
                try {
                    String traversable = gridPoints[y][xSize-1-x] ? "__" : "||";
                    out = toPrint[x][y] == null ? "|"+ traversable : toPrint[x][y];
                }catch(IndexOutOfBoundsException e){
                    if (x == xSize) out = y < 10 ? y+"  " : y+" ";
                    if (y == -1) out = (xSize-1-x) < 10 ? " "+(xSize-1-x) : ""+(xSize-1-x);
                    if (x == xSize && y == -1) out = "   ";
                }

                System.out.print(out);
            }
            if(x != xSize) System.out.println("|");

        }
        System.out.println();

    }


    private int[][] buildPath(Point end){
        LinkedList<int[]> path = new LinkedList<>();
        while (end != null){
            path.add(0,new int[] {end.getX(),end.getY()});
            end = end.previous;
        }

        int[][] r = new int[path.size()][2];
        return path.toArray(r);
    }

    private int getDist(int x1, int y1, int x2, int y2){
        int xDist = Math.abs(x1-x2);
        int yDist = Math.abs(y1-y2);
        return xDist > yDist ? dDist*yDist+oDist*(xDist-yDist) : dDist*xDist+oDist*(yDist-xDist);
    }

}
