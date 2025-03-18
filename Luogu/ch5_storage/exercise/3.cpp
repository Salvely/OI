#include <iostream>
using namespace std;
int main(void)
{
	int n, m;
	cin >> n >> m;
	int a[n];
	int sum[n-m+1];
	for(int i = 0; i < n-m+1; i++)
		sum[i] = 0;
	int i = 0;
	int j = 0;
	int min_sum;
	while(n--) {
		int num;
		cin >> num;	
		a[i] = num;
		if(i <= m - 1) {
			sum[j] += num;
			min_sum = sum[j];
		}
		else {
			j++;
			sum[j] = sum[j-1] + num - a[i-m];
			if(sum[j] < min_sum)
				min_sum = sum[j];
		}
		i++;
	}	
	cout << min_sum << endl;
	return 0;
}
