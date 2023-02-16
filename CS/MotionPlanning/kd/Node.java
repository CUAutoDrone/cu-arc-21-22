package kd;

import java.util.ArrayList;

public class Node {
	public Point location;
	public KDTree left;
	public KDTree right;
	
	public Node(Point x) {
		location = x;
	}
}