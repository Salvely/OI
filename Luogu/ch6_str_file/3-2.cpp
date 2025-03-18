#include <cstdio>
#include <climits>
#include <cstring>
#include <stdbool.h>
using namespace std;
int main(void)
{
	char a[110];
	scanf("%s",a);
	int ans[26];
	for(int i = 0; i < 26; i++) {
		ans[i] = 0;
	}
	int l, delta;

	l = strlen(a);
	for(int i = 0; i < l; i++) {
		ans[a[i] - 'a']++;
	}
	
	int mmax = 0;
	int mmin = INT_MAX;
	for(int i = 0; i < 26; i++) {
		if(ans[i] < mmin && ans[i] != 0) {
			mmin = ans[i];
		}
		if(ans[i] > mmax) {
			mmax = ans[i];
		}
	}
	delta = mmax - mmin;
	bool prime = true;
	if(delta == 0 || delta == 1) {	
		prime = false;
	}
	if(delta == 2)
		prime = true;
	else if(delta % 2 == 0) {
		prime = false;
	}
	for(int i = 2; i * i <= delta; i++) {
		if(delta % i == 0) {
			prime = false;
			break;
		}
	}
	if(prime) {
		printf("Lucky Word\n%d\n",delta);
	}
	else {
		printf("No Answer\n0\n");
	}
	return 0;
}
