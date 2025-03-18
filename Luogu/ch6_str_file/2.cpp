#include <iostream>
#include <string.h>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int len = s.length();
	for(int i = 0; i < len; i++) {
		int offset = s[i] - 'a';
		int new_offset = (offset + n) % 26;
		s[i] = 'a' + new_offset;
	}
	cout << s << endl;
	return 0;
}
