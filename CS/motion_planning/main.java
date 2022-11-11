package astar;

import java.util.ArrayList;

public class Main {
	public static void main(String[] args) {
		ArrayList<Node> graph = new ArrayList<Node>();
		Node n1 = new Node(1, 0, 0, new ArrayList<Node>());
		graph.add(n1);
		ArrayList<Node> n2Neighbors = new ArrayList<Node>();
		n2Neighbors.add(n1);
		Node n2 = new Node(2, 1, 1, n2Neighbors);
		graph.add(n2);
		AStar aStar = new AStar(graph, n1, n2);
		System.out.println(aStar.search());
	}
}
