package kd;

import java.util.*;

public class KdTree {
	private Node root;
	private int numPoints = 0; // number of points in the tree
	private int depth = 0; // maximum tree depth
	int k = 2; // number of dimensions: 2 for 2-D space
	
	// Constructor 1
	public KdTree(int depth, List<Point> pointList) {
		numPoints += pointList.size();
		this.depth = depth;
		root = makeTree(depth, pointList);
	}
	
	// Constructor 2
	public KdTree(Point point) {
		root = new Node(point);
		numPoints = 1;
	}
	
	// Create a tree with the given depth from the given points
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
		node.left = new KdTree(depth + 1, pointList.subList(0, medianIndex));
		node.right = new KdTree(depth + 1, pointList.subList(medianIndex + 1, pointList.size()));
		return node;
	}
	
	// Add point p to the tree
	public void add(Point p) {
		int currDepth = 0;
		Node curr = root;
		ArrayList<Point> toAdd = new ArrayList<Point>();
		toAdd.add(p);
		
		while(curr != null) {
			if(curr.location.compareTo(p, currDepth % k == 0) < 0) {
				if(curr.left == null) {
					curr.left = new KdTree(p);
					break;
				}
				else {
					curr = curr.left.root;
				}
			}
			
			else {
				if(curr.right == null) {
					curr.right = new KdTree(p);
				}
				else {
					curr = curr.right.root;
				}
			}
		}
	}
	
	// Calculate depth of tree
	public int depth(Point p) {
		if(root == null) return -1;
		if(root.location == p) return 0;
		if(root.left.depth(p) > -1) return 1 + root.left.depth(p);
		return 1 + root.right.depth(p);
	}
	
	// Utility function to determine "minimum" of three nodes
	// using point compareTo method
	public Node minNode(Node x, Node y, Node z, int dim) {
		Node res = x;
		Point resLoc = null;
		if(res != null) {
			resLoc = x.location;
		}
		if(y != null && y.location.compareTo(resLoc, dim == 0) < 0) {
			res = y;
			resLoc = y.location;
		}
		if(z != null && z.location.compareTo(resLoc, dim == 0) < 0) {
			res = z;
		}
		return res;
	}
	
	// Finds minimum node in tree along dimension dim
	public Node findMin(Node n, int dim) {
		if(n == null) return null;
		if(dim == depth(n.location) % k) {
			if(root.left == null) return root;
			return findMin(root.left.root, dim);
		}
		
		Node l = null;
		if(n.left != null) {
			l = n.left.root;
		}
		Node r = null;
		if(n.right != null) {
			r = n.right.root;
		}
		 
		return minNode(n, findMin(l, dim), findMin(r, dim), dim);
		
	}
	
	// Delete point pt from tree with root rt. Currently does not work
	// (points are not deleted from tree)
	// See https://www.geeksforgeeks.org/deletion-in-k-dimensional-tree/
	private Node deleteRec(Node rt, Point pt, int depth) {
		if(pt == null) return null;
		int currDim = depth % k;
		if(rt.location.x == pt.x && rt.location.y == pt.y) {
			if(rt.right != null) {
				Node min = findMin(rt, currDim);
				rt.location.x = min.location.x;
				rt.location.y = min.location.y;
				rt.right = new KdTree(deleteRec(rt.right.root, min.location, depth + 1).location);
			}
			else if(rt.left != null) {
				Node min = findMin(rt, currDim);
				rt.location.x = min.location.x;
				rt.location.y = min.location.y;
				if(deleteRec(rt.left.root, min.location, depth + 1) == null) {
					rt.right = null;
				}
				else {
					rt.right = new KdTree(deleteRec(rt.left.root, min.location, depth + 1).location);
				}
			}
			else {
				rt = null;
				return null;
			}
		}
		if(pt.compareTo(root.location, currDim == 0) < 0) {
			rt.left = new KdTree(deleteRec(rt.left.root, pt, depth + 1).location);
		}
		else {
			Node r = null;
			if(rt.right != null) {
				r = deleteRec(rt.right.root, pt, depth + 1);
			}
			if(r == null) {
				rt.right = null;
			}
			else {
				rt.right = new KdTree(deleteRec(rt.right.root, pt, depth + 1).location);
			}
		}
		return rt;
	}
	
	public Node delete(Point pt) {
		return deleteRec(root, pt, 0);
	}
	
	public int pointCount() {
		return numPoints;
	}
	
	// Find closest point to in tree to point p
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

			if(curr != null && curr.location.dist(p, currDepth % k == 0) < currBestDist) {
				currBestDist = curr.location.dist(p, currDepth % k == 0);
				currBestNode = curr;
			}
			path.push(curr);
			currDepth++;
		}
		
		return currBestNode.location;
	}
	
	// Find all points within a radius of r from point p, in order from
	// closest to farthest
	public Point[] radiusNearestNeighbors(Point p, double r) {
		Point nearest = nearestNeighbor(p);
		ArrayList<Point> pts = new ArrayList<Point>();
		while(nearest.euclideanDist(p) <= r) {
			System.out.println(nearest);
			pts.add(nearest);
			this.delete(nearest);
			nearest = nearestNeighbor(p);
		}
		Point[] ptsArray = new Point[pts.size()];
		for(int i = 0; i < pts.size(); i++) {
			ptsArray[i] = pts.get(i);
		}
		return ptsArray;
	}
}
