public class Pathfiind {
    public static void main(String[] args){
        Grid g3 = new Grid(15,15);

        /*
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

         */




        int size = 10000;

        Grid g = new Grid(size,size);


        int s = 2*size/3;
        for (int i = 5; i <= s;i ++){
            g.makeObstacle(5,i);
            g.makeObstacle(i,5);
            g.makeObstacle(s,i);
            g.makeObstacle(i,s);
        }
        /*

        for (int i = 1; i < size; i+=2){
            for (int j = 1; j < size-1; j++){
                g.makeObstacle(i,j);
            }
            if (i % 4 == 1) g.makeObstacle(i,0);
            if (i %4 == 3) g.makeObstacle(i,size-1);
        }
*/
        for (int i = 0; i < 1_000_000_000; i++){
            g.makeObstacle(15,15);
            g.removeObstacle(15,15);
        }

        double avg = 0;
        int[][] path;
        int total = 45;
        for (int i = 0; i < total; i++) {

            long startTime = System.currentTimeMillis();
            path = g.findPathAStar(0, 0, size - 1, size - 1);

            avg += ((double) (System.currentTimeMillis() - startTime));
        }
        System.out.println(avg/(total*1000)+"s");

        /*
        startTime = System.currentTimeMillis();
        path = g.findPathDijkstras(0,0, size-1, size-1);

        System.out.println("Dijkstras "+((double)(System.currentTimeMillis()-startTime))/1000);
        */
/*

        for(int[] p: path){
            System.out.println("x,y: "+p[0]+","+p[1]);
        }

        g.printPath(path);
  */



    }
}
