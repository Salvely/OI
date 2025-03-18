#include <iostream>
#include <stdbool.h>
using namespace std;
bool isPrime(int num);
bool isPalidrome(int num);
int reverse(int num);
int main(void)
{
	int a,b;
	cin >> a >> b;
	if(a == 1) a++;
	for(int i = a; i <= b; i++) {
		if(i % 2 == 0) continue;
		if(isPalidrome(i) && isPrime(i)) {
			cout << i << endl;
		}
	}
	return 0;	
}

bool isPrime(int num) {
	for(int i = 2; i * i <= num; i++) {
		if(num % i == 0)
			return false;
	}
	return true;
}

int reverse(int num) {
	int result = 0;
	while(num != 0) {
		int digit = num % 10;
		result = result * 10 + digit;
		num = num / 10;
	}
	return result;
}

bool isPalidrome(int num) {
	return num == reverse(num);	
}
