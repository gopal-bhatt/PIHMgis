#ifndef SIMPLIFY_POLYLINE
#define SIMPLIFY_POLYLINE


struct Point{
	double x, y;
};

double dPointToLine(Point L1, Point L2, Point P);

void simplify_polyline(Point *poly, int start, int end, double tolerance, int *marker);


#endif

	
