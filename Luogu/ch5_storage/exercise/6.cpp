#include <iostream>
using namespace std;
enum direction { RIGHT, DOWN, UP, LEFT};
int main(void)
{
	int n;
	cin >> n;
	// initialize array
	int a[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			a[i][j] = 0;
	int row = 0;
	int col = 0;
	direction dir = RIGHT;	
	for(int i = 1; i <= n * n; i++) {
		a[row][col] = i;
		if(dir == RIGHT) {
			if(col == n-1 || a[row][col+1] != 0) {
				dir = DOWN;
				row += 1;			
			}
			else {
				col += 1;
			}
		} 
		else if(dir == DOWN) {
			if(row == n-1 || a[row+1][col] != 0) {
				dir = LEFT;
				col -= 1;
			}
			else {
				row += 1;
			}
		}
		else if(dir == LEFT) {
			if(col == 0 || a[row][col-1] != 0) {
				dir = UP;
				row -= 1;
			}
			else {
				col -= 1;
			}
		}
		else if(dir == UP || a[row-1][col] != 0) {
			if(row == 0 || a[row-1][col] != 0) {
				dir = RIGHT;
				col += 1;
			}
			else {
				row -= 1;
			}
		}
	}		
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			printf("%3d",a[i][j]);
		}
		cout << endl;
	}
	return 0;
}	
			
