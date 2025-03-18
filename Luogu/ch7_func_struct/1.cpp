#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	double x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double line1 = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
       	double line2 = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	double line3 = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	cout << line1 + line2 + line3 << endl;
	return 0;
}	
	
