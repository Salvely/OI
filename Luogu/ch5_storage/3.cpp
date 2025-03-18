#include <iostream>
using namespace std;
void hail(int n);
int main(void)
{
	int n;
	cin >> n;
	hail(n);
	return 0;
}
void hail(int n) {
	if(n == 1) {
		cout << n << endl;
		return;
	}
	int temp = n;
	if(n % 2 == 0) {
		n = n / 2;
	}
	else {
		n = 3 * n + 1;
	}
	hail(n);
	cout << temp  << endl;
}
