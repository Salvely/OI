#include <cstdio>
using namespace std;
int main(void)
{
	int a, b, t;
	scanf("%d %d",&a,&b);
	t = a;
	a = b;
	b = t;
	printf("%d %d",a,b);
	return 0;
}
