#include <iostream>
using namespace std;
int main(void) {
	int n = 0, temp, a[110];
	do {
		cin >> temp;
		a[n] = temp;
		n++;
	}while(temp != 0);
	n--;
	while(n--) {
		cout << a[n] << endl;
	}
	return 0;
}
