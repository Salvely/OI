#include <cstdio>
int main(void)
{
	char s[100];
	scanf("%s",s);
	for(int i = 0; s[i] != '\0'; i++) {
		char ch = s[i];
		if(ch >= 'a' && ch <= 'z') {
			s[i] = 'A' + ch - 'a';
		}
	}
	printf("%s\n",s);
	return 0;
}
