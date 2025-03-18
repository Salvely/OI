#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	double a = 1;
	double b = -100;
	double c = 2400;
	double delta = pow(b,2)-4*a*c;
	double ans = (-b+sqrt(delta)) / (2.0*a);
	cout << 110-round(ans) << endl;
	return 0;
}
