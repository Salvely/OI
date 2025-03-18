#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	double uim = 10000*5*0.04+10000;
	double a = 10000;
	a = a*(1+0.035);
	a = a*(1+0.035);
	a = a*(1+0.035);
	a = a*(1+0.035);
	a = a*(1+0.035);
	cout << a << " " << uim << endl;
	return 0;
}
