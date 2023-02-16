package kd;

import java.util.Comparator;

public class PointComparator implements Comparator<Point> {
	boolean xAligned;
	
	public PointComparator(boolean xAligned) {
		this.xAligned = xAligned;
	}
	
	public int compare(Point p1, Point p2) {
		if (xAligned) {
			if(p1.x > p2.x) return 1;
			if(p2.x > p1.x) return -1;
			return 0;
		}
		if(p1.y > p2.y) return 1;
		if(p2.y > p1.y) return -1;
		return 0;
	}
}