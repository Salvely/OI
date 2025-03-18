#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	int a[n][n];
	int mark = 0;
	int num;
	int row = 0;
	int col = 0;
	int sum = 0;
	while(sum < n*n) {
		cin >> num;
		sum += num;
		for(int i = 0; i < num; i++) {
			a[row][col] = mark;
			col ++;
			if(col % n == 0) {
				col = 0;
				row++;
			}
		}
		mark = 1 - mark;
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout<<a[i][j];
		}
		cout << endl;
	}
	return 0;	
}	
