package kd;

import java.util.*;

public class KDTree {
	private Node root;
	private int numPoints = 0;
	private int depth = 0;
	int k = 2;
	
	public KDTree(int depth, List<Point> pointList) {
		numPoints += pointList.size();
		this.depth = depth;
		root = makeTree(depth, pointList);
	}
	
	public KDTree(Point point) {
		root = new Node(point);
		numPoints = 1;
	}
	
	public Node makeTree(int depth, List<Point> pointList) {
		int numToSort = 100;
		UniqueRng rng = new UniqueRng(numToSort);
		ArrayList<Point> pointsToSort = new ArrayList<Point>();
		HashMap<Point, Integer> pointToIndex = new HashMap<Point, Integer>();
		
		while(rng.hasNext()) {
			int next = rng.next();
			pointsToSort.add(pointList.get(next));
			pointToIndex.put(pointList.get(next), next);
		}
		
		pointsToSort.sort(new PointComparator(depth % k == 0));
		Point median = pointsToSort.get(pointsToSort.size() / k);
		Node node = new Node(median);
		int medianIndex = pointToIndex.get(median);
		node.left = new KDTree(depth + 1, pointList.subList(0, medianIndex));
		node.right = new KDTree(depth + 1, pointList.subList(medianIndex + 1, pointList.size()));
		return node;
	}
	
	public void add(Point p) {
		int currDepth = 0;
		Node curr = root;
		ArrayList<Point> toAdd = new ArrayList<Point>();
		toAdd.add(p);
		
		while(curr != null) {
			if(curr.location.compareTo(p, currDepth % k == 0) < 0) {
				if(curr.left == null) {
					curr.left = new KDTree(p);
				}
				else {
					curr = curr.left.root;
				}
			}
			else {
				if(curr.right == null) {
					curr.right = new KDTree(p);
				}
				else {
					curr = curr.right.root;
				}
			}
		}
		
	}
	
	public int pointCount() {
		return numPoints;
	}
	
	public Point nearestNeighbor(Point p) {
		Node curr = root;
		Stack<Node> path = new Stack<Node>();
		int currDepth = 0;
		double currBestDist = curr.location.dist(p, currDepth % k == 0);
		Node currBestNode = root;
		
		while(curr != null) {
			if(curr.location.compareTo(p, currDepth % k == 0) < 0) {
				if(curr.left == null) {
					curr = null;
				}
				else {
					curr = curr.left.root;
				}
			}
			else {
				if(curr.right == null) {
					curr = null;
				}
				else {
					curr = curr.right.root;
				}
			}
			
			if(curr.location.dist(p, currDepth % k == 0) < currBestDist) {
				currBestDist = curr.location.dist(p, currDepth % k == 0);
				currBestNode = curr;
			}
			path.push(curr);
			currDepth++;
		}
		
		return currBestNode.location;
	}
}
