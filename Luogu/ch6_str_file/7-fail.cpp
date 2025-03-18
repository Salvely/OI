#include <iostream>
#include <sstream>
using namespace std;
int main(void)
{
	string word;
	cin >> word;
	cin.ignore();
	int l = word.length();
	for(int i = 0; i < l; i++) {
		word[i] = toupper(word[i]);
	}	

	int first = -1;
	int count = 0;
	int j = 0;
	string passage;
	getline(cin,passage);
	istringstream is(passage);

	string s;
	while(is >> s) {
		int len = s.length();
		for(int i = 0; i < len; i++) {
			s[i] = toupper(s[i]);
		}

		if(word == s) {
			count ++;
			if(first == -1)
				first = j;
		}			
		j += (len+1);
	}
	
	if(first != -1)
		cout << count << " ";
	
	cout << first << endl;
	return 0;
}		
