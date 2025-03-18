#include <iostream>
#include <cstdio>
int main(void)
{
	int n,k;
	scanf("%d %d",&n,&k);
	double sum_a;
	double sum_b;
	for(int i = k; i <= n; i += k) {
		sum_a += i;
	}
	sum_b = n * (n + 1) / 2 - sum_a;
	printf("%.1f\n",sum_a / (n / k));
	printf("%.1f\n",sum_b / (n - n / k));
	return 0;
}

