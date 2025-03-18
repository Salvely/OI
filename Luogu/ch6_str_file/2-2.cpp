#include <cstdio>
using namespace std;
int main(void)
{
	int n;
	char s[100];
	scanf("%d %s",&n,s);
	for(int i = 0; s[i] != '\0'; i++) {
		s[i] = (s[i] - 'a' + n) % 26 + 'a';
		putchar(s[i]);
	}
	return 0;
}
