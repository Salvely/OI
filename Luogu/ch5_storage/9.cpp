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
		bool first_row = find(a[0], a[0] + N, K-1) != (a[0] + N);
		bool last_row = find(a[N-1], a[N-1] + N, K-1) != (a[N-1] + N);
		bool first_col = false;
		for(int i = 0; i < N; i++) {
			if(a[i][0] == K-1) {
				first_col = true;
				break;
			}
		}
		bool last_col = false;
		for(int i = 0; i < N; i++) {
			if(a[i][N-1] == K-1) {
				last_col = true;
				break;
			}
		}
		if(first_row && !last_col) {
			prev_row = N-1;
			prev_col = prev_col + 1;
		}
		else if(last_col && !first_row) {
			prev_row = prev_row - 1;
			prev_col = 0;
		}
		else if(first_row && last_col) {
			prev_row += 1;
		}
		else if(!first_row && !last_col) {
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

