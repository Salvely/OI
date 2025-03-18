#include <iostream>
#include <sstream>
using namespace std;
int main(void)
{
	string line;
	getline(cin,line);
	istringstream is(line);
	string word;
	while(is >> word) {
		cout << word << endl;
	}
	return 0;
}
