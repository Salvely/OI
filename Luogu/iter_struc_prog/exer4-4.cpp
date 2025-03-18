#include <iostream>
using namespace std;
unsigned long long fib(int n);
int main(void)
{
	int n;
	cin >> n;
	cout << fib(n) << endl;
	return 0;
}

unsigned long long fib(int n) {
	int i = 1;
	unsigned long long first = 1;
	unsigned long long second = 1;
	while(i < n) {
		unsigned long long temp = second;
	       	second = first + second;
		first = temp;
		i ++;
	}	
	return first;
}
