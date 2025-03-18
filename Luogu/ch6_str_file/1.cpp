#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;
int main(void)
{
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++) {
		if(islower(s[i])) {
			cout << (char)toupper(s[i]);
		}
		else {
			cout << (char)s[i];
		}
	}
	cout << endl;
	return 0;
}	
