#include <iostream>
using namespace std;
typedef struct loc {
	int x;
	int y;
}loc_t;

int main(void)
{
	int n,m,k;
	cin >> n >> m >> k;
	int a[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			a[i][j] = 0;
	
	for(int i = 1; i <= m; i++) {
		int x,y;
		cin >> x >> y;
		x --;
		y --;
		loc_t vec[13] = {
			{x,y}, {x-1,y-1}, {x-1,y}, {x-1,y+1}, {x,y-1}, {x,y+1}, {x+1,y-1},{x+1,y},{x+1,y+1},{x-2,y},{x+2,y},{x,y-2},{x,y+2}
		};
		for(int j = 0; j < 13; j++) {
			if(vec[j].x < 0 || vec[j].x >= n || vec[j].y < 0 || vec[j].y >= n) {
				vec[j].x = x;
				vec[j].y = y;
			}
			a[vec[j].x][vec[j].y] = 1;	
		}
					
	}

	for(int i = 1; i <= k; i++) {
		int o,p;
		cin >> o >> p;
		o--;
		p--;
		loc_t vec[25];
		int count = 0;
		for(int i = o - 2; i <= o + 2; i++)
			for(int j = p - 2; j <= p + 2; j++) {
				if(i < 0 || i >= n || j < 0 || j >= n)
					vec[count] = {o,p};
				else	
					vec[count] = {i,j};
				count ++;
			}
		for(int i = 0; i < 25; i++) {
			a[vec[i].x][vec[i].y] = 1;
		}
	}	

	int count = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(a[i][j] == 0)
				count ++;
		}
	}
	cout << count << endl;
	return 0;
}
		
