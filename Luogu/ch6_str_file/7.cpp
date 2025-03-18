#include <iostream>
using namespace std;
int main(void)
{
	string s;
	cin >> s;
	cin.ignore();
	string passage;
	getline(cin,passage);
	
	int len_s  = s.length();
	int len_p = passage.length();
	for(int i = 0; i < len_s; i++) {
		s[i] = toupper(s[i]);
	}
	for(int i = 0; i < len_p; i++) {
		passage[i] = toupper(passage[i]);
	}

	s = ' ' + s + ' ';
	passage = ' ' + passage + ' ';
	
	int pos = -1;
	int count = 0;

	pos = passage.find(s);
	if(pos == -1) {
		cout << pos << endl;
	}
	else {
		int temp = pos;
		while(temp != -1) {
			count ++;
			temp = passage.find(s,temp+1);
		}
		cout << count << " " << pos << endl;
	}
	return 0;
}
			

