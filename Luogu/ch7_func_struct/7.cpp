#include <iostream>
using namespace std;
long long fact(int n);
int main(void)
{
	int n;
	cin >> n;
	cout << fact(n) << endl;
	return 0;
}
long long fact(int n)
{
	if(n <= 2) {
		return n;
	}
	else{
		return n * fact(n-1);
	}
}	
