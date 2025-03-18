#include <iomanip>
#include <iostream>
using namespace std;
int main(void)
{
	double t;
	int n;
	cin >> t >> n;
	cout << setprecision(3) << t / (2 * n) << endl;
	cout << 2 * n << endl;
	return 0;
}
