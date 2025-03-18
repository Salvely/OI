#include <iostream>
#include <stdbool.h>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	char a[n][n];
	char b[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> a[i][j];

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> b[i][j];

	// 90 degress transformation
	bool same = true;
	for(int j = 0; j < n; j++)
		for(int i = n - 1; i >= 0; i--) {
			if(a[i][j] != b[j][n-1-i]) {
				same = false;	
				break;
			}
		}
	if(same) {
		cout << 1 << endl;
		return 0;
	}	

	// 180 degrees transformation
	same = true;
	for(int i = n-1; i >= 0; i--)
		for(int j = n-1; j >= 0; j--) {
			if(a[i][j] != b[n-1-i][n-1-j]) {
				same = false;
				break;
			}
		}
	if(same) {
		cout << 2 << endl;
		return 0;
	}

	//270 degrees transformation
	same = true;
	for(int j = n-1; j >= 0; j--)
		for(int i = 0; i < n; i++) {
			if(a[i][j] != b[n-1-j][i]) {
				same = false;
				break;
			}
		}
	if(same) {
		cout << 3 << endl;
		return 0;
	}

	// reflection
	same = true;
	for(int i = 0; i < n; i++)
		for(int j = 0; j <= n / 2; j++) {
			if(b[i][j] != a[i][n-1-j]) {
				same = false;
				break;
			}
		}
	if(same) {
		cout << 4 << endl;
		return 0;
	}

	// combination
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n / 2; j++) {
			int temp = a[i][j];
			a[i][j] = a[i][n-1-j];
			a[i][n-1-j] = temp;
		}
	same = true;
	for(int j = 0; j < n; j++)
		for(int i = n - 1; i >= 0; i--) {
			if(a[i][j] != b[j][n-1-i]) {
				same = false;	
				break;
			}
		}
	if(same) {
		cout << 5 << endl;
		return 0;
	}
	
	same = true;
	for(int i = n-1; i >= 0; i--)
		for(int j = n-1; j >= 0; j--) {
			if(a[i][j] != b[n-1-i][n-1-j]) {
				same = false;
				break;
			}
		}
	if(same) {
		cout << 5 << endl;
		return 0;
	}
	
	same = true;
	for(int j = n-1; j >= 0; j--)
		for(int i = 0; i < n; i++) {
			if(a[i][j] != b[n-1-j][i]) {
				same = false;
				break;
			}
		}
	if(same) {
		cout << 5 << endl;
		return 0;
	}

	// don't change
	same = true;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) {
			if(a[i][j] != b[i][j]) {
				same = false;
				break;
			}
		}
	if(same) {
		cout << 6 << endl;
		return 0;
	}
	
	// can't turn into 7
	cout << 7 << endl;
	return 0;
}	
