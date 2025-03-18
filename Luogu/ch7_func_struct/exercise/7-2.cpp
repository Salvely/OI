#include <iostream>
using namespace std;
int gcd(int a, int b);
int main(void)
{
	cout << gcd(24,36) << endl;
	return 0;
}

int gcd(int a, int b) {
	if(b == 0) {
		return a;
	}
	else {
		int r = a % b;
		a = b;
		b = r;
		return gcd(a,b);
	}
}	
