#include <iostream>
#include <stdbool.h>
using namespace std;
bool leapYear(int year);
int main(void)
{
	int year, month;
	cin >> year >> month;
	bool even = (month % 2 == 0);
	bool isLeapYear = leapYear(year);
	if(month == 2 && isLeapYear) {
		cout << 29 << endl;
	}
	else if(month == 2) {
		cout << 28 << endl;
	}
	else if(even && month < 8) {
		cout << 30;
	}
	else if(even) {
		cout << 31;
	}
	else if(!even && month < 8) {
		cout << 31;
	}
	else {
		cout << 30;
	}
	return 0;	
}
bool leapYear(int year) {
	if((year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0))
		return true;
	return false;
}
