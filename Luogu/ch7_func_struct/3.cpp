#include <iostream>
#include <stdbool.h>
using namespace std;
bool isLeapYear(int year);
int main(void)
{
	int x,y;
	cin >> x >> y;
	int count = 0;
	int arr[y-x+1];
	for(int year = x; year <= y; year++) {
		if(isLeapYear(year)) {
			arr[count] = year;
			count ++;
		}
	}
	cout << count << endl;
	for(int i = 0; i < count; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;	
}
bool isLeapYear(int year)
{
	if((year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0)) {
		return true;
	}
	return false;
}
