#include <iostream>
using namespace std;
int main(void)
{
	string s;
	getline(cin,s);
	int len = s.length();
	int count = 0;
	for(int i = 0; i < len; i++) {
		char ch = s[i];
		if(ch == ' ') 
			count ++;
		else {
			int offset = ch - 'a';
			if(offset <= 14) {
				int number = offset % 3;
				count += (number + 1);
			}
			else {
				if(offset >= 15 && offset <= 18) {
					count += (offset - 14);
				}
				else if(offset >= 19 && offset <= 21) {
					count += (offset - 18);
				}
				else if(offset >= 22 && offset <= 25) {
					count += (offset - 21);
				}	
			}
		}
	}
	cout << count << endl;
	return 0;
}
