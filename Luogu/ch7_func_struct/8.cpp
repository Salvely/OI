#include <iostream>
#include <cmath>
using namespace std;
int a[1500][1500];
int len;
void input(int &n);
void func(int n, int start_row, int start_col, int side_len);
void output();
int main(void)
{
	int n;
	input(n);
	func(n, 0, 0, len);
	output();
}
void input(int &n)
{
	cin >> n;
	len = pow(2,n);
	for(int i = 0; i < len; i++) 
		for(int j = 0; j < len; j++)
			a[i][j] = 1;
}

void func(int n, int start_row, int start_col, int side_len)
{
	if(n == 0)
		return;
	for(int i = start_row; i < start_row + side_len / 2; i++) 
		for(int j = start_col; j < start_col + side_len / 2; j++)
			a[i][j] = 0;
	func(n-1,start_row+side_len / 2, start_col, side_len / 2);
	func(n-1,start_row, start_col + side_len / 2, side_len / 2);
	func(n-1,start_row + side_len / 2, start_col + side_len / 2, side_len / 2);	
}

void output()
{
	for(int i = 0; i < len; i++) {
		for(int j = 0; j < len; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
