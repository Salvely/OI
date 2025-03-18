#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	int num = 1;
	for(int i = n; i >= 1; i--) {
		for(int j = 0; j < i; j++) {
			printf("%02d",num);
			num ++;
		}
		printf("\n");
	}
	return 0;
}	
