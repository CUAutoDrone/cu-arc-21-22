public class AStarPoint extends Point{
    public int hCost;
    public int gCost = Integer.MAX_VALUE/3*2;

    /**
     * Creates an AStarPoint at the coordinate x,y
     */
    public AStarPoint(int x, int y){
        super(x,y);
    }

    public int fCost(){
        return hCost + gCost;
    }

    @Override
    public String toString(){
        return "x,y: " + super.getX() + "," + super.getY() + " hCost: " + hCost + " gCost: "+gCost;
    }

}
