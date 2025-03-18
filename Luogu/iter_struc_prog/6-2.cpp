#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	int total = (1 + n) * n / 2;
	int count = n;
	for(int i = 1; i <= total; i++) {
		printf("%02d", i);
		if(i == count) {
			printf("\n");
			n --;
			count += n;
		}
	}
	return 0;
}
