#include <iostream>
using namespace std;
int main(void)
{
	int k;
	cin >> k;
	int sum = 0;
	int gold = 1;
	int day = 1;
	while(day <= k) {
		for(int i = 1; i <= gold; i++) {
			sum += gold;
			day++;
			if(day > k) {
				cout << sum << endl;
				return 0;
			}
		}
		gold++;
	}
	return 0;
}
