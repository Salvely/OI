#include <cstdio>
#include <cstring>
#include <ctype.h>
#include <cstdlib>
using namespace std;
int main(void)
{
	int n;
	scanf("%d",&n);
	getchar();
	char op;
	while(n--) {
		char line[100];
		if(fgets(line,100,stdin) == NULL) {
			return 1;
		}
		if(isalpha(line[0])) {
			op = line[0];
			int i;
			for(i = 2; line[i] != '\0'; i++) {
				line[i-2] = line[i];
			}
			line[i] = '\0';
		}
		char s[2] = " ";
		char* token;
		token = strtok(line,s);
		int num1 = atoi(token);
		token = strtok(NULL,s);
		int num2 = atoi(token);
		int result;	
		char output[100];

		switch(op) {
			case 'a':
				result = num1 + num2;
				sprintf(output,"%d+%d=%d",num1,num2,result);		
				break;
			case 'b':
				result = num1 - num2;
				sprintf(output,"%d-%d=%d",num1,num2,result);		
				break;
			case 'c':
				result = num1 * num2;
				sprintf(output,"%d*%d=%d",num1,num2,result);		
				break;
		}
		
		printf("%s\n",output);
		int l = 0;
		while(output[l] != '\0') {
			l++;
		}
		printf("%d\n",l);
	}
	return 0;
}
			
