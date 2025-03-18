#include <iostream>
using namespace std;
int main(void)
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int e,f;
	int total_min = (c * 60 + d ) - (a * 60 + b);
	e = total_min / 60;
	f = total_min % 60;
	cout << e << " " << f << endl;
	return 0;
}
