#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	cin.get();
	char op;
	while(n--) {
		string s;
		getline(cin,s);

		if(isalpha(s[0])) {
			op = s[0];
			s = s.substr(2);
		}

		char* delim = " ";
		char* token;
		token = strtok((char*)s.c_str(),delim);
		int num1 = stoi(token);
		token = strtok(NULL,delim);
		int num2 = stoi(token);
		int result;
		string output;

		switch(op) {
			case 'a':
				result = num1 + num2;
				output = to_string(num1)+"+"+to_string(num2)+"="+to_string(result);
				break;
			case 'b':
				result = num1 - num2;
				output = to_string(num1)+"-"+to_string(num2)+"="+to_string(result);
				break;
			case 'c':
				result = num1 * num2;
				output = to_string(num1)+"*"+to_string(num2)+"="+to_string(result);
				break;
		}
		
		cout << output << endl;
		cout << output.length() << endl;
	}
	return 0;
}
		
				
		
		
