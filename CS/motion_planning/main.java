package astar;

import java.util.Arrays;

public class Main {
    public static double aStar(int[][] graph, double[][] heuristic, int start, int goal) {
        int[] distances = new int[graph.length];
        Arrays.fill(distances, Integer.MAX_VALUE);
        distances[start] = 0;

        double[] priorities = new double[graph.length];
        Arrays.fill(priorities, Integer.MAX_VALUE);
        priorities[start] = heuristic[start][goal];

        boolean[] visited = new boolean[graph.length];

        while (true) {

            double lowestPriority = Integer.MAX_VALUE;
            int lowestPriorityIndex = -1;
            for (int i = 0; i < priorities.length; i++) {
                if (priorities[i] < lowestPriority && !visited[i]) {
                    lowestPriority = priorities[i];
                    lowestPriorityIndex = i;
                }
            }

            if (lowestPriorityIndex == -1) {
                return -1;
            } else if (lowestPriorityIndex == goal) {
                System.out.println("Goal node found!");
                return distances[lowestPriorityIndex];
            }

            System.out.println("Visiting node " + lowestPriorityIndex + " with currently lowest priority of " + lowestPriority);

            for (int i = 0; i < graph[lowestPriorityIndex].length; i++) {
                if (graph[lowestPriorityIndex][i] != 0 && !visited[i]) {
                    if (distances[lowestPriorityIndex] + graph[lowestPriorityIndex][i] < distances[i]) {
                        distances[i] = distances[lowestPriorityIndex] + graph[lowestPriorityIndex][i];
                        priorities[i] = distances[i] + heuristic[i][goal];
                        System.out.println("Updating distance of node " + i + " to " + distances[i] + " and priority to " + priorities[i]);
                    }
                }
            }
            visited[lowestPriorityIndex] = true;
            System.out.println("Visited nodes: " + Arrays.toString(visited));
            System.out.println("Currently lowest distances: " + Arrays.toString(distances));

        }
    }
    
    public static void main(String[] args) {
    	int[][] graph = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    	double[][] heuristic = {{Integer.MAX_VALUE, 1, 1}, {1, Integer.MAX_VALUE, 1}, {1, 1, Integer.MAX_VALUE}};
    	System.out.println("A* result: " + aStar(graph, heuristic, 0, 2));
    }
}
