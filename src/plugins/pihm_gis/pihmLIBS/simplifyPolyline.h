#include <iostream>
#include <math.h>

using namespace std;

struct Point{
	double x, y;
};

double dPointToLine(Point L1, Point L2, Point P){
	double dist; 
	dist = (L1.y-L2.y)*P.x + (L2.x-L1.x)*P.y + (L1.x*L2.y - L2.x*L1.y);
	dist = dist / sqrt(pow((L2.x-L1.x),2) + pow((L2.y-L1.y),2));
	if(L1.x==L2.x && L1.y==L2.y)
		dist = sqrt(pow((L1.x-P.x),2) + pow((L1.y-P.y),2));
	return (dist>0?dist:(-dist));
}
/*
void simplify_Polyline(Point *poly, int start, int end, double tolerance, int *marker, int flag){ //
	// Flag accounts if the function is called for the first time.. 0=>first time; 1=>otherwise
	if (end < start+1)
		return;
	cout<<start<<"\t"<<end<<"\n";
	static int count=0;
	if(flag == 0)
		count = 0;
	int     maxIndex = start;      // index of vertex farthest from S
	double   maxDistance = 0;       // distance squared of farthest vertex
    
	for (int i=start+1; i<end; i++){
		double dist = dPointToLine(poly[start], poly[end], poly[i]);
		if(dist > maxDistance){
			maxDistance = dist;
			maxIndex = i;
		}
	}

	if(maxDistance>tolerance){
		marker[count] = maxIndex;
		cout<<"count= "<<count<<"\n";
		cout<<"marker="<<marker[count]<<"\n";
		count++;
		simplify_Polyline(poly, start, maxIndex, tolerance, marker, 1);
		simplify_Polyline(poly, maxIndex, end, tolerance, marker, 1);
	}
	return;
}
*/
void simplifyPolyline(Point *poly, int start, int end, double tolerance, int *marker){ //, int flag){ //
	// Flag accounts if the function is called for the first time.. 0=>first time; 1=>otherwise
	if (end < start+1)
		return;// 0;
	//cout<<start<<"\t"<<end<<"\n";
	/*static int count=1;
	if(flag == 0)
		count = 1; */
	int     maxIndex = start;      // index of vertex farthest from S
	double   maxDistance = 0;       // distance squared of farthest vertex
    
	for (int i=start+1; i<end; i++){
		double dist = dPointToLine(poly[start], poly[end], poly[i]);
		if(dist > maxDistance){
			maxDistance = dist;
			maxIndex = i;
		}
	}

	if(maxDistance>tolerance){
		//marker[count] = maxIndex;
		marker[maxIndex]=1;
		//cout<<"count= "<<count<<"\n";
		//cout<<"marker="<<marker[count]<<"\n";
		//count++;
		simplifyPolyline(poly, start, maxIndex, tolerance, marker);
		simplifyPolyline(poly, maxIndex, end, tolerance, marker);
	}
	return;// count;
}
	
