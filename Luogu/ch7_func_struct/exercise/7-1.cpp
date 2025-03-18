#include <iostream>
using namespace std;
void reverse(int n);
int main(void)
{
	int n;
	cin >> n;
	reverse(n);
	return 0;
}	
void reverse(int n) {
	if(n >= 10) {
		int digit = n % 10;
		cout << digit;
		reverse(n / 10);
	}
	else {
		cout << n;
		return;
	}
}
