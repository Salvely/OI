#include <iostream>
using namespace std;
unsigned long long fact(int n);
int main(void)
{
	int n;
	cin >> n;
	unsigned long long sum = 0;
	for(int i = 1; i <= n; i++) {
		sum += fact(i);
	}
	cout << sum << endl;
	return 0;	
}
unsigned long long fact(int n)
{
	unsigned long long result = 1;
	for(int i = 1; i <= n; i++)
		result *= i;
	return result;
}	
