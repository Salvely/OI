#include <iostream>
using namespace std;
unsigned long long reverse(unsigned long long num);
int main(void)
{
	string s;
	cin >> s;
	unsigned long long index;
	int base = 10;
	char* end;
	if((index = s.find(".")) != -1) {
		unsigned long long integer = strtoull(s.substr(0,index).c_str(),&end,base);	
		unsigned long long frac = strtoull(s.substr(index+1).c_str(),&end,base);
		cout << reverse(integer) << "." << reverse(frac) << endl;
	}
	else if((index = s.find("/")) != -1) {
		unsigned long long denom = strtoull(s.substr(0,index).c_str(),&end,base);	
		unsigned long long nom = strtoull(s.substr(index+1).c_str(),&end,base);
		cout << reverse(denom) << "/" << reverse(nom) << endl;
	}
	else if((index = s.find("%")) != -1) {
		unsigned long long num = strtoull(s.substr(0,index).c_str(),&end,base);
		cout << reverse(num) << "%" << endl;
	}
	else {
		cout << reverse(strtoull(s.c_str(),&end,base)) << endl;
	}
	return 0;
}
unsigned long long reverse(unsigned long long num) {
	unsigned long long result = 0;
	while(num != 0) {
		unsigned long long digit = num % 10;
		result = result * 10 + digit;
		num = num / 10;
	}
	return result;
}
