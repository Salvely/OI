#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int b[n];
	for(int i = 0; i < n; i++) {
		b[i] = 0;
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if(a[j] < a[i]) {
				b[i] ++;
			}
		}
	}
	for(int i = 0; i < n; i++) {
		cout << b[i] << endl;
	}	
	return 0;
}	
