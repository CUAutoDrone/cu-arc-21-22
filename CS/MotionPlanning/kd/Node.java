package kd;

import java.util.ArrayList;

public class Node {
	public Point location;
	public KdTree left;
	public KdTree right;
	
	public Node(Point x) {
		location = x;
	}
}