#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	int size = n * (n-1) / 2;
	int sum[size];
	int index = 0;
	for(int i = 0; i < n-1; i++) {
		for(int j = i+1; j < n; j++) {
			sum[index] = a[i] + a[j];
			index ++;
		}
	}
	sort(a,a+n);
	sort(sum,sum+size);
	int a_i = 0;
	int sum_i = 0;
	int count = 0;
	while(a_i < n && sum_i < size) {
		if(sum[sum_i] < a[a_i]) {
			sum_i ++;
		}
		else if(sum[sum_i] > a[a_i]) {
			a_i ++;
		}
		else {
			sum_i ++;
			a_i ++;
			count ++;
		}
	}
	cout << count << endl;
	return 0;
}	
