#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	cin.get();
	while(n--) {
		string s;
		getline(cin,s);
		cout << "Hello," << s << endl;
	}
	return 0;
}
