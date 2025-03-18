#include <iostream>
using namespace std;
int main(void)
{
	unsigned long long a;
	cin >> a;
	int day = 1;
	while(a > 1) {
		a = a / 2;
		day += 1;
	}
	cout << day << endl;
	return 0;
}	

