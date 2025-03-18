#include <iostream>
using namespace std;
int main(void)
{
	int year;
	cin >> year;
	cout << !(year % 4) || !(year % 400) && (year % 100 != 0);
	return 0;
}
