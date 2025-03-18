#include <iostream>
#include <sstream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	while(getchar()!='\n');
	ostringstream os;
	while(n--) {
		string line;
		getline(cin,line);
		char op = line[0];
		line = line.substr(2);
		int pos = -1;
		switch(op) {
			case '1':
				s += line;
				os << s << endl;
				break;
			case '2':
				int start, end;
				sscanf(line.c_str(),"%d %d",&start,&end);
				s = s.substr(start,end);
				os << s << endl;
				break;
			case '3':
				char str[100];
				sscanf(line.c_str(),"%d %s",&pos,str);
				s.insert(pos,string(str));
				os << s << endl;
				break;
			case '4':
				pos = s.find(line);
				if(pos != string::npos) {
					os << pos << endl;
				}
				else {
					os << -1 << endl;
				}
				break;	
			default:
				break;
		}
	}
	cout << os.str();
	return 0;
}
