import java.util.Comparator;

public class AStarPointCompare implements Comparator<AStarPoint> {

    @Override
    public int compare(AStarPoint o1, AStarPoint o2) {
        int c =  Integer.compare(o1.fCost(), o2.fCost());
        if (c == 0){
            c = Integer.compare(o1.hCost, o2.hCost);
        }
        return c;
    }

}