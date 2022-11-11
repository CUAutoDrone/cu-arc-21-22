package astar;

import java.util.Arrays;
import java.util.ArrayList;
import java.util.HashMap;

public class AStar {
	
	private ArrayList<Node> graph = new ArrayList<Node>();
	private Node start;
	private Node target;
	private ArrayList<Node> opened;
	private ArrayList<Node> closed;
	private int numSteps;
	
	public AStar(ArrayList<Node> graph, Node start,
			Node target) {
		this.graph = graph;
		this.start = start;
		this.target = target;
		opened = new ArrayList<Node>();
		closed = new ArrayList<Node>();
	}
	
	public double calcDist(Node parent, Node child) {
		for (Node neighbor: parent.getNeighbors()) {
			if(neighbor.getX() == child.getX()) {
				double dist = parent.getDistFromStart() + neighbor.getY();
				if (dist < child.getDistFromStart()) {
					child.parent = parent;
					return dist;
				}
				
				return child.getDistFromStart();
			}
		}
		return 0;
	}
	
	public Node removeFromOpened() {
		double min = Integer.MAX_VALUE;
		Node toRemove = null;
		
		for(Node node: opened) {
			if(node.getHeuristic() < min) {
				min = node.getHeuristic();
				toRemove = node;
			}
		}
		if(toRemove != null) {
			opened.remove(toRemove);
		}
		return toRemove;
	}
	
	public double findHeuristic(Node parent, Node child) {
		return calcDist(parent, child) + Math.sqrt(Math.pow(parent.getX() - child.getX(), 2) + Math.pow(parent.getX() - child.getX(), 2));
	}
	
	public Node getOldNode(double nodeVal) {
		for(Node node: opened) {
			if(node.getValue() == nodeVal) {
				return node;
			}
		}
		return null;
	}
	
	public ArrayList<Node> search() {
		start.setDistFromStart(0);
		start.setHeuristic(Math.sqrt(Math.pow(start.getX() - target.getX(), 2) + Math.pow(start.getY() - target.getY(), 2)));
		
		for(Node node: graph) {
			opened.add(node);
		}
		
		while (true) {
			numSteps++;
			
			if(opened.size() == 0) {
				System.out.println("No solution found");
				break;
			}
			
			Node removed = removeFromOpened();
			
			if (removed == target) {
				ArrayList<Node> path = new ArrayList<Node>();
				path.add(removed);
				Node currNode = removed;
				while(currNode.getParent() != null) {
					currNode = currNode.getParent();
					path.add(currNode);
				}
				return path;
			}
			
			ArrayList<Node> newNodes = removed.getNeighbors();
			
			if(newNodes.size() > 0) {
				for(Node newNode: newNodes) {
					newNode.setHeuristic(findHeuristic(removed, newNode));
					if(!closed.contains(newNode) && !opened.contains(newNode)) {
						newNode.setParent(removed);
						opened.add(newNode);
					}
					else if(closed.contains(newNode) && newNode.parent != removed) {
						Node oldNode = getOldNode(newNode.getValue());
						if(newNode.getHeuristic() < oldNode.getHeuristic()) {
							newNode.setParent(removed);
							opened.add(newNode);
						}
					}
				}
			}
		}
		return null;
	}
}
