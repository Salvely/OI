#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	int sum = 0;
	for(double i = 0.1; i + 1e-3 < n; i += 0.1) {
		sum += i;
	}
	cout << sum << endl;
	return 0;
}	
