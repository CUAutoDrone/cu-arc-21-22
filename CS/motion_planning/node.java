package astar;

import java.util.ArrayList;

public class Node {
	double value;
	double x;
	double y;
	double heuristicValue;
	double distFromStart;
	ArrayList<Node> neighbors;
	Node parent;
	
	public Node(double value, double x, double y, ArrayList<Node> neighbors) {
		this.value = value;
		this.x = x;
		this.y = y;
		this.heuristicValue = -1;
		this.distFromStart = Integer.MAX_VALUE;
		this.neighbors = neighbors;
	}
	
	public ArrayList<Node> getNeighbors() {
		return neighbors;
	}
	
	public double getDistFromStart() {
		return distFromStart;
	}
	
	public double getX() {
		return x;
	}
	
	public double getY() {
		return y;
	}
	
	public double getHeuristic() {
		return heuristicValue;
	}
	
	public double getValue() {
		return value;
	}
	
	public Node getParent() {
		return parent;
	}
	
	public void setDistFromStart(double dist) {
		distFromStart = dist;
	}
	
	public void setHeuristic(double heuristic) {
		heuristicValue = heuristic;
	}
	
	public void setParent(Node parent) {
		this.parent = parent;
	}
}