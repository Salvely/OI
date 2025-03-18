#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	long long sum = 0;
	for(int i = 1; i <= n; i++) {
		long long fact = 1;
		for(int j = i; j >= 1; j--) {
			fact *= j;
		}
		sum += fact;
	}
	cout << sum << endl;
	return 0;
}
	
