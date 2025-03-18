#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;
int main(void)
{
	int N;
	cin >> N;
	int height = 5;
	int width = N * 3 + (N - 1);
	char led[height][width];
	for(int i = 0; i < height; i++)
		for(int j = 0; j < width; j++) {
			led[i][j] = '.';
		}
	int start_row = 0;
	int start_col = 0;
	string num;
	cin >> num;
	int index = 0;
	int a[100];
	int temp = N;
	while(temp--){
		a[index] = num[temp] - '0';
		index ++;
	}	
	while(N--) {	
		int digit = a[N];
		// light 0
		if(digit == 0 || digit == 2 || digit == 3 || digit == 5 || digit == 6 || digit == 7 || digit == 8 || digit == 9) {
			for(int j = start_col; j < start_col + 3; j++) {
				led[0][j] = 'X';
			}
		}
		// light 1
		if(digit == 0 || digit == 4 || digit == 5 || digit == 6 || digit == 8 || digit == 9) {
			for(int j = start_row; j < start_row + 3; j++) {
				led[j][start_col] = 'X';
			}
		}
		// light 2
		if(digit == 0 || digit == 1 || digit == 2 || digit == 3 || digit == 4 || digit == 7 || digit == 8 || digit == 9) {
			for(int j = start_row; j < start_row + 3; j++) {
				led[j][start_col + 2] = 'X';
			}
		}
		// light 3
		if(digit == 5 || digit == 6 || digit == 2 || digit == 3 || digit == 4 || digit == 8 || digit == 9) {
			for(int j = start_col; j < start_col+ 3; j++) {
				led[2][j] = 'X';
			}
		}
		// light 4
		if(digit == 0 || digit == 2 || digit == 6 || digit == 8) {
			for(int j = 2; j <= 4; j++)
				led[j][start_col] = 'X';
		}	
		// light 5
		if(digit == 0 || digit == 1 || digit == 5 || digit == 6 || digit == 3 || digit == 4 || digit == 7 || digit == 8 || digit == 9) {
			for(int j = 2; j <= 4; j++) {
				led[j][start_col + 2] = 'X';
			}
		}
		// light 6	
		if(digit == 0 || digit == 2 || digit == 3 || digit == 5 || digit == 6 || digit == 8 || digit == 9) {
			for(int j = start_col; j < start_col + 3; j++) {
				led[4][j] = 'X';
			}
		}
		start_row = 0;
		start_col += 4;
	}
	for(int i = 0; i < height; i++) {
		for(int j = 0; j < width; j++) {
			cout << led[i][j];
		}
		cout << endl;
	}
	return 0;
}
