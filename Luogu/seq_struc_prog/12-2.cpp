#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	int s,v;
	scanf("%d %d",&s,&v);
	int walk_time = ceil(1.0*s/v)+10;
	int from_zero = (24+8) * 60 - walk_time;
	int h = (from_zero / 60) % 24;
	int m = from_zero % 60;
	printf("%02d:%02d\n",h,m);
	return 0;
}
