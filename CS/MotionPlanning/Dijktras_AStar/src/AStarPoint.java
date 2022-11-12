public class AStarPoint extends Point{
    int hCost;
    int gCost;

    AStarPoint(int x, int y){
        super(x,y);
    }

    public int fCost(){
        return hCost + gCost;
    }

}
