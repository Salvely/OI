#include <cstdio>
using namespace std;
int main(void)
{
	int a, b, c, d, e,f , delta;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	delta = -(a * 60 + b)+(c * 60 + d);
	e = delta / 60;
	f = delta % 60;
	printf("%d %d", e, f);
	return 0;
}
