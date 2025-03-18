#include <iostream>
using namespace std;
void toUpperString(string& s);
int main(void)
{
	string s;
	cin >> s;
	toUpperString(s);
	cout << s << endl;
	return 0;
}
void toUpperString(string& s)
{
	int len = s.length();
	for(int i = 0; i < len; i++) {
		s[i] = toupper(s[i]);
	}
}	
