#include <iostream>
using namespace std;
int n,m;
char a[100][100];
bool check(int row, int col) {
	return (row >= 0) && (row < n) && (col >= 0) && (col < n);
}

int calcMine(int row, int col) {
	int delta_x[3] = {-1,0,1};
	int delta_y[3] = {-1,0,1};
	int count = 0;
	for(int x: delta_x) 
		for(int y: delta_y) {
			int current_r = row + x;
			int current_c = col + y;
			if(check(current_r, current_c) && a[current_r][current_c] == '*') {
				count ++;
			}
		}
	return count;
}

int main(void)
{
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];
		
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(a[i][j] != '*') {
			       a[i][j] = (char)(calcMine(i,j) + '0');
		       	}
			cout << a[i][j];
		}	
		cout << endl;
	}
	return 0;
}
