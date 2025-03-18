#include <iostream>
using namespace std;
unsigned long long fib(unsigned long long n);
int main(void)
{
	cout << fib(20) << endl;
	return 0;
}
unsigned long long fib(unsigned long long n) {
	if(n <= 2) {
		return 1;
	}
	else {
		unsigned long long first = 1;
		unsigned long long second = 1;
		for(unsigned long long i = 3; i <= n; i++) {
			unsigned long long temp = first;
			first = second;
			second = temp + second;	
		}
		return second;
	}
}
