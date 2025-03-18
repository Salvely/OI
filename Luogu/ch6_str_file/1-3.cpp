#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	char ch;
	while((ch = getchar()) != EOF) {
		if(ch >= 'a' && ch <= 'z') {
			ch = ch - 'a' + 'A';
		}
		putchar(ch);
	}
	return 0;
}	
