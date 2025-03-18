#include <iostream>
using namespace std;
int count(int num, int digit);
int main(void)
{
	int n,digit;
	cin >> n >> digit;
	int sum = 0;
	for(int i = 1; i <= n; i++) {
//		cout << "current number: " << i << endl;
//		int digit_num = count(i,digit);
//		cout << digit << " occurs " << digit_num << " times." << endl;
		sum += count(i,digit);
	}
	cout << sum << endl;
	return 0;
}	
int count(int num, int digit) {
	int n = 0;
	while(num != 0) {
		int current_digit = num % 10;
		num = num / 10;
		if(digit == current_digit)
			n ++;
	}
	return n;
}	
