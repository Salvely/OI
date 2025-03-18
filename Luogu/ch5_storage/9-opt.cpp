#include <iostream>
#include <stdbool.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int N;
	cin >> N;
	int a[N][N];
	for(int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			a[i][j] = 0;
	a[0][N / 2] = 1;
	int prev_row = 0;
	int prev_col = N / 2;
	for(int K = 2; K <= N * N; K++) {
		if((prev_row == 0) && !(prev_col == N-1)) {
			prev_row = N-1;
			prev_col = prev_col + 1;
		}
		else if((prev_col == N-1) && !(prev_row == 0)) {
			prev_row = prev_row - 1;
			prev_col = 0;
		}
		else if((prev_row == 0) && (prev_col == N-1)) {
			prev_row += 1;
		}
		else if(!(prev_row == 0) && !(prev_col == N-1)) {
			if(a[prev_row-1][prev_col +1] == 0) {
				prev_row = prev_row - 1;
				prev_col = prev_col + 1;
			}
			else {
				prev_row = prev_row + 1;
			}
		}
		a[prev_row][prev_col] = K;
	}
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}	

