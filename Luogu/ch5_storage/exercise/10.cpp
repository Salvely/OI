#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;
int main(void)
{
	int a[40000];
	int i = 0;
	int count = 0;
	int previous = 0;
	int b[40000];
	int j = 0;
	char ch;
	int N = 0;
	while(ch = getchar()) {
		if(ch == '\n' && N == 0) {
			N = i;
			continue;
		}
		else if(ch == '\n')
			continue;
		a[i] = ch - '0';
		if(a[i] != previous) {
			b[j] = count;
			j ++;	
			previous = a[i];
			count = 1;
		}	
		else {
			count++;
		}	
		i++;
		if(i == N * N) {
			b[j] = count;
			j++;
			break;
		}
	}
	cout << N << " ";
	for(int k = 0; k < j; k++) {
	       cout << b[k] << (k == j-1?'\n':' ');
	}		
	return 0;
}
