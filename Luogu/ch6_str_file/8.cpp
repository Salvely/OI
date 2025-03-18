#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	freopen("title.in","r",stdin);
	freopen("title.out","w",stdout);
	string s;
	int ans = 0;
	while(cin >> s) {
		ans += s.length();
	}
	cout << ans << endl;
	return 0;
}
