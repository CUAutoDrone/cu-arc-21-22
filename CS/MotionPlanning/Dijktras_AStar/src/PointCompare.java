import java.util.Comparator;

public class PointCompare implements Comparator<Point> {


    @Override
    public int compare(Point o1, Point o2) {
        return o1.dist- o2.dist;
    }
}
