#include <iostream>
using namespace std;
int main(void)
{
	int n,m;
	cin >> n >> m;
	int box[n][n];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                box[i][j] = 0;	
	while(m--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		x1 --;
		y1 --;
		x2 --;
		y2 --;
		for(int i = x1; i <= x2; i++) {
			for(int j = y1; j <= y2; j++) {
				box[i][j]++;
			}
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << box[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
