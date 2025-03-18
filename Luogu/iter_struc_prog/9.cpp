#include <iostream>
using namespace std;
int main(void)
{
	int k;
	cin >> k;
	double sum = 0;
	int n = 1;
	while(sum < k) {	
		sum += (1.0 / n);
		n++;
	}
	cout << n << endl;
	return 0;
}
