#include <iostream>
using namespace std;
int main(void)
{
	int n,h,r;
	cin >> n >> h >> r;
	double rate_per_man = (1.0 * r) / (n * h);
	cout << 9 * 9 * rate_per_man << endl;
	return 0;
}

