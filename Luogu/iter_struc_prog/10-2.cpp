#include <iostream>
using namespace std;
int main(void)
{
	int k, coin = 0, day = 0;
	cin >> k;
	for(int i = 1;; i++) {
		for(int j = 1; j <= i; j++) {
			coin += i;
			day ++;
			if(day == k) {
				cout << coin << endl;
				return 0;
			}
		}
	}
	return 0;
}
