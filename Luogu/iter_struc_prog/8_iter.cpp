#include <iostream>
using namespace std;
int main(void)
{
	int n, digit;
	cin >> n >> digit;
	int sum = 0;
	for(int i = 1; i <= n; i++) {
		int temp = i;
		while(temp != 0) {
			int current = temp  % 10;
			if(current == digit) sum ++;
			temp = temp / 10;
		}
	}
	cout << sum << endl;
	return 0;
}
