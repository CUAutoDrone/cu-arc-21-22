package kd;

import java.util.*;

public class Point {
	public double x;
	public double y;
	
	public Point(double x, double y) {
		this.x = x;
		this.y = y;
	}
	
	public int compareTo(Point p2, boolean xAligned) {
		if(p2 == null) return 1;
		PointComparator comp = new PointComparator(xAligned);
		return comp.compare(this, p2);
	}
	
	public double dist(Point p2, boolean xAligned) {
		if(p2 == null) return Integer.MAX_VALUE;
		if(xAligned) return x - p2.x;
		return y - p2.y;
	}
}


