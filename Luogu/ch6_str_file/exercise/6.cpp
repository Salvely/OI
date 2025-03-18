#include <iostream>
using namespace std;
int main(void)
{
	string s1,s2;
	cin >> s1;
	cin >> s2;
	int result1 = 1;
	int result2 = 1;
	for(char ch:s1) {
		int i = ch - 'A' + 1;
		result1 = result1 * i;
	}
	for(char ch:s2) {
		int i = ch - 'A' + 1;
		result2 = result2 * i;
	}	
	if(result1 % 47 == result2 % 47) {
		cout << "GO" << endl;
	}
	else {
		cout << "STAY" << endl;
	}
	return 0;
}
