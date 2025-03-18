#include <cstdio>
using namespace std;
int a[1050][1050], n;
void call(int x, int y, int n);
int main(void)
{
	int n;
	scanf("%d",&n);
	call(0,0,n);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			printf("%d%c",a[i][j], j == (1 << n) - 1? '\n':' ');
	return 0;
}
void call(int x, int y, int n)
{
	if(n == 0)
		a[x][y] = 1;
	else{
		call(x + (1 << n-1), y, n-1);
		call(x, y + (1 << n - 1), n - 1);
		call(x + (1 << n - 1), y + (1 << n - 1), n - 1);
	}
}
