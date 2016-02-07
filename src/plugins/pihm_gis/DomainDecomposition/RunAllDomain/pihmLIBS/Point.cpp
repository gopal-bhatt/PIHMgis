#include "Point.h"

int equalPoint(Point p1, Point p2){
	if(p1.x==p2.x && p1.y==p2.y)
		return 1;
	else
		return 0;
}

