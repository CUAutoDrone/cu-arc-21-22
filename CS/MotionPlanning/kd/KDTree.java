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
	
	public int depth(Point p) {
		if(root == null) return -1;
		if(root.location == p) return 0;
		if(root.left.depth(p) > -1) return 1 + root.left.depth(p);
		return 1 + root.right.depth(p);
	}
	
	public Node minNode(Node x, Node y, Node z, int dim) {
		if(dim == 0) {
			if(x.location.x >= y.location.x && x.location.x >= z.location.x) {
				return x;
			}
			if(y.location.x >= z.location.x) {
				return y;
			}
			return z;
		}
		if(x.location.y >= y.location.y && x.location.y >= z.location.y) {
			return x;
		}
		if(y.location.y >= z.location.y) {
			return y;
		}
		return z;
	}
	
	public Node findMin(Node n, int dim) {
		if(n == null) return null;
		if(dim == depth(n.location) % k) {
			if(root.left == null) return root;
			return findMin(root.left.root, dim);
		}
		 
		return minNode(n, findMin(n.left.root, dim), findMin(n.right.root, dim), 
				dim);
		
	}
	
	private Node deleteRec(Node rt, Point pt, int depth) {
		if(pt == null) return null;
		int currDim = depth % k;
		if(root.location.x == rt.location.x && rt.location.y == rt.location.y) {
			if(rt.right != null) {
				Node min = findMin(rt, currDim);
				rt.location.x = min.location.x;
				rt.location.y = min.location.y;
				rt.right = new KDTree(deleteRec(rt.right.root, min.location, depth + 1).location);
			}
			else if(rt.left != null) {
				Node min = findMin(rt, currDim);
				rt.location.x = min.location.x;
				rt.location.y = min.location.y;
				rt.right = new KDTree(deleteRec(rt.left.root, min.location, depth + 1).location);
			}
			else {
				rt = null;
				return null;
			}
		}
		if(pt.compareTo(root.location, currDim == 0) < 0) {
			rt.left = new KDTree(deleteRec(rt.left.root, pt, depth + 1).location);
		}
		else {
			rt.right = new KDTree(deleteRec(rt.right.root, pt, depth + 1).location);
		}
		return rt;
	}
	
	public Node delete(Point pt) {
		return deleteRec(root, pt, 0);
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
	
	public Point[] radiusNearestNeighbors(Point p, double r) {
		Point nearest = nearestNeighbor(p);
		ArrayList<Point> pts = new ArrayList<Point>();
		while(nearest.euclideanDist(p) <= r) {
			pts.add(nearest);
			this.delete(p);
		}
		return (Point[]) pts.toArray();
	}
}
