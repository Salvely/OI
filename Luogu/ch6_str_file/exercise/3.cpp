#include <iostream>
using namespace std;
int findAndReplace(string& s, char* target, int target_len);
int main(void)
{
	string s;
	getline(cin,s);
	int boy = 0;
	int girl = 0;
	// find boy
	// replace boy with XXX
	boy += findAndReplace(s,"boy",3);
	// find girl
	// replace girl with XXXX
	girl += findAndReplace(s,"girl",4);
	// find bo
	// replace bo with XX
	boy += findAndReplace(s,"bo",2);
	// find oy
	// replace oy with XX
	boy += findAndReplace(s,"oy",2);
	// find b,o,y
	// replace b,o,y with X
	int len = s.length();
	for(int i = 0; i < len; i++) {
		if(s[i] == 'b' || s[i] == 'o' || s[i] == 'y') {
			s[i] = 'X';
			boy ++;
		}
	}	
	// find gir
	// replace gir with XXX
	girl += findAndReplace(s,"gir",3);
	// find irl
	// replace irl with XXX
	girl += findAndReplace(s,"irl",3);
	// find gi
	// replace gi with XX
	girl += findAndReplace(s,"gi",2);
	// find ir
	// replace ir with XX
	girl += findAndReplace(s,"ir",2);
	// find rl
	// replace rl with XX
	girl += findAndReplace(s,"rl",2);
	// find g,i,r,l
	// replace g,i,r,l with X
	for(int i = 0; i < len; i++) {
		if(s[i] == 'g' || s[i] == 'i' || s[i] == 'r' || s[i] == 'l') {
			s[i] = 'X';
			girl ++;
		}
	}
	cout << boy << endl;
	cout << girl << endl;
	return 0;
}	
int findAndReplace(string& s,char* target, int target_len) {
	int count = 0;
	int pos = s.find(string(target));
	string new_str;
	for(int i = 0; i < target_len; i++) {
		new_str += 'X';
	}
	while(pos != -1) {
		count += 1;
		s.replace(pos,target_len,new_str);
		pos = s.find(target,pos+target_len);
	}
	return count;
}
