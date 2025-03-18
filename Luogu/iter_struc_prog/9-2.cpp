#include <iostream>
using namespace std;
int main(void)
{
	int k, ans = 1;
	cin >> k;
	for(double Sn = 0; Sn <= k; Sn += (1.0 / ans),ans ++); 
	cout << ans << endl;
	return 0;
}
