#include <iostream>
using namespace std;
int main(void)
{
	double sum, mul;
	cin >> sum >> mul;
	double a, uim;
	a = (1.0 * sum) / (mul + 1);
	uim = mul * a;
	cout << a << " " << uim << endl;
	return 0;
}
