#include <iostream>
#include <cmath>
using namespace std;
double dist(double x1, double y1, double x2, double y2);
int main(void)
{
	double x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double line1 = dist(x1,y1,x2,y2);
       	double line2 = dist(x1,y1,x3,y3);
	double line3 = dist(x2,y2,x3,y3);
	cout << line1 + line2 + line3 << endl;
	return 0;
}	
	
double dist(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
