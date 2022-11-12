import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Objects;

public class Point {

    /**
     * Stores the coordinate x,y in the form [x, y]
     */
    private int[] xy;
    /**
     * The point connected to this point that is on the fastest path back to the starting point
     */
    public Point previous;
    /**
     * Distance from the starting point
     */
    public int dist;

    Point(){

    }

    /**
     * Creates a Point at the coordinate x,y
     */
    public Point(int x, int y){
        xy = new int[]{x,y};
    }
    /**
     * Creates a Point at the coordinate x,y that is a specified distance
     */
    public Point(int x, int y, int distance){
        xy = new int[]{x,y};
        dist = distance;
    }

    /** Returns this Points y value
     */
    public int getX(){
        return xy[0];
    }

    /** Returns this Points x value
     */
    public int getY(){
        return xy[1];
    }

    /** Hashes this Point
     * Returns the same hash for Points that are equals and different hash codes
     * for points that are not equal.
     */
    @Override
    public int hashCode(){
        return Arrays.hashCode(xy);
    }


    /** Compares this to Object o
     * Returns true if the x and y coordinates of the compared points are the same
     *  otherwise returns false
     */
    @Override
    public boolean equals(Object o){
        if (o.getClass() != this.getClass()) return false;
        Point p = (Point) o;
        return getX() == p.getX() && getY() == p.getY();


    }
    /** Prints the information about this Point
     * Ex. for the Point 5,6 at distance 15 that has been visited
     * x,y: 5,6 dist: 15 visited: false
     */
    @Override
    public String toString() {
        return "x,y: " + getX() + "," + getY() + " dist: " + dist;
    }

}
