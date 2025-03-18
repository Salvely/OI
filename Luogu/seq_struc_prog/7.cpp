#include <iostream>
using namespace std;
int main(void)
{
	double n;
	cin >> n;
	double ans;
	int num = n * 10;
	int first_digit = num / 1000;
	ans = first_digit;
	num = num % 1000;
	int second_digit = num / 100;
	ans = (ans / 10.0) + second_digit;
	num = num % 100;
	int third_digit = num / 10;
	ans = (ans / 10.0) + third_digit;
	num = num % 10;
	int fourth_digit = num;
	ans = (ans / 10.0) + fourth_digit;
	cout << ans << endl;	
	return 0;
}
	
