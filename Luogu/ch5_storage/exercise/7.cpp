#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			a[i][j] = 0;
		}
	}

	a[0][0] = 1;
	for(int i = 1; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			if(j == 0 || j == i) {
				a[i][j] = 1;
			}
			else {
				a[i][j] = a[i-1][j-1] + a[i-1][j];
			}
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
	
				
