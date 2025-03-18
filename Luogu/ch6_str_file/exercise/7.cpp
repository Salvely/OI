#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
	string code;
	getline(cin,code);
	int value[3];
	for(int i = 0; i < 3; i++) {
		value[i] = 0;
	}
	
	char* delim = ";";
	char* token = strtok((char*)code.c_str(),delim);
	while(token != NULL) {
		char var;
		char val[10];
		int num;
		sscanf(token,"%c:=%s",&var,val);
		if(val[0] >= '0' && val[0] <= '9') {
			num = atoi(val);
		}
		else {
			int src;
			switch(val[0]) {
				case 'a':
					src = 0;
					break;
				case 'b':
					src = 1;
					break;
				case 'c':
					src = 2;
					break;
				default:
					break;
			}
			num = value[src];		
		}	
		int dest;
		switch(var) {
			case 'a':
				dest = 0;
				break;
			case 'b':
				dest = 1;
				break;
			case 'c':
				dest = 2;
				break;
			default:
				break;
		}
		value[dest] = num;	
		token = strtok(NULL,delim);
	}
	cout << value[0] << " " << value[1] << " " << value[2] << " " << endl;
	return 0;
}
	
