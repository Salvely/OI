#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(void)
{
	double s, v;
	cin >> s >> v;
	int total_min = ceil(1.0*s / v) + 10;
	int from_zero = 60 * (24 + 8) - total_min;
	double h = (from_zero / 60) % 24;
	double m = from_zero % 60;
	cout << setw(2)<<setfill('0') << h << ":"<< setw(2) << setfill('0') << m << endl;
	return 0;
}
