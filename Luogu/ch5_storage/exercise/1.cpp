#include <iostream>
using namespace std;
int main(void)
{
	long long M,N;
	cin >> M >> N;
	int a[10];
	for(int i = 0; i < 10; i++)
		a[i] = 0;
	for(int i = M; i <= N; i++) {
		int temp = i;
		while(temp != 0) {
			int digit = temp % 10;
			a[digit] += 1;
			temp = temp / 10;
		}
	}
	for(int i = 0; i < 10; i++) {
		cout << a[i] << (i==9?'\n':' ');
	}
	return 0;
}	
