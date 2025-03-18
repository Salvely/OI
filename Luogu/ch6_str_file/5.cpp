#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string s;
	int ans = 0;
	while(cin >> s) {
		ans += s.length();
	}
	cout << ans << endl;
	return 0;
}
