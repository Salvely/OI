#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int s1,s2,s3;
	cin >> s1 >> s2 >> s3;
	int total_case = s1 + s2 + s3;
	int a[total_case + 1];
	for(int i = 0; i < total_case + 1; i++) {
		a[i] = 0;
	}
	for(int i = 1; i <= s1; i++) 
		for(int j = 1; j <= s2; j++)
			for(int k = 1; k <= s3; k++) {
				int sum = i + j + k;
				a[sum]++;
			}
	
	int max = a[3];
	int index = 3;
	for(int i = 4; i <= total_case; i++) {
		if(a[i] > max) {
			max = a[i];
			index = i;
		}
	}
	cout << index << endl;
	return 0;
}	
