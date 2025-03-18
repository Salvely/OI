#include <iostream>
#define SIZE 256
using namespace std;
int main(void) {
	int n;
	cin >> n;
	int a[SIZE];
	int i = 0;
	while(n != 1) {
		a[i] = n;
		if(n % 2 == 0) {
			n = n / 2;
		}
		else {
			n  = n * 3 + 1;
		}
		i++;
	}
	a[i] = 1;
	while(i >= 0) {
		cout << a[i] << endl;
		i--;
	}
	return 0;
}	
