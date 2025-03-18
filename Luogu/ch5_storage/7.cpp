#include <iostream>
using namespace std;
int main(void)
{
	int w,x,h;
	cin >> w >> x >> h;
	int arr[w][x][h];
	for(int i = 0; i < w; i++) 
		for(int j = 0; j < x; j++)
			for(int k = 0; k < h; k++)
				arr[i][j][k] = 1;
	int q;
	cin >> q;
	while(q--) {
		int x1, y1, z1, x2, y2, z2;
		cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
		x1 --;
		y1 --;
		z1 --;
		x2 --;
		y2 --;
		z2 --;
		for(int i = x1; i <= x2; i++) 
			for(int j = y1; j <= y2; j++)
				for(int k = z1; k <= z2; k++) {
					arr[i][j][k] --;
				}
	}
	int sum = 0;
	for(int i = 0; i < w; i++)
		for(int j = 0; j < x; j++)
			for(int k = 0; k < h; k++) {
				if(arr[i][j][k] > 0) 
					sum ++;
			}
	cout << sum << endl;
	return 0;
}
