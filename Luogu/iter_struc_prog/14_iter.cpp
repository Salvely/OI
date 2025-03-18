#include <iostream>
using namespace std;
int main(void)
{
	int a,b;
       	cin >> a >> b;
	
	if(a <= 3 && b >= 3) cout << 3 << endl;
	if(a <= 5 && b >= 5) cout << 5 << endl;
	if(a <= 7 && b >= 7) cout << 7 << endl;
	if(a <= 11 && b >= 11) cout << 11 << endl;

	// 4 bit palidromes enumeration
	for(int i = 1; i <= 9; i += 2) {
		for(int j = 0; j <= 9; j ++) {
			int num = 100 * i + 10 * j + i;
			if(num < a) continue;
			if(num > b) return 0;
			// judge if prime
			bool prime = true;
			for(int k = 2; k * k <= num; k++) {
				if(num % k == 0) {
					prime = false;
				}
			}
			if(prime) {
				cout << num << endl;
			}
		}
	}

	// 5 bit palidromes enumeration
	for(int i = 1; i <= 9; i += 2) {
		for(int j = 0; j <= 9; j++) {
			for(int k = 0; k <= 9; k ++) {
				int num = 10000 * i + 1000 * j + k * 100 + j * 10 + i;
				if(num < a) continue;
				if(num > b) return 0;
				// judge if prime
				bool prime = false;
				for(int temp = 2; temp * temp <= num; temp ++) {
					if(num % temp == 0) {
						prime = true;
						break;
					}
				}
				if(prime) {
					cout << num << endl;
				}
			}
		}
	}

	// judge 4 bit pattern
	for(int i = 1; i <= 9; i += 2) {
		for(int j = 0; j <= 9; j++) {
			for(int k = 0; k <= 9; k++) {
				for(int l = 0; l <= 9; l++) {
					int num = 1000000 * i + 100000 * j + 10000 * k + 1000 * l + 100 * k + 10 * j + i;
					if(num < a) continue;
					if(num > b) break;
					
					bool prime  = false;
					for(int temp = 2; temp * temp <= num; temp++) {
						if(num % temp == 0) {
							prime = true;
							break;
						}
					}
					if(prime) {
						cout << prime << endl;
					}				
				}
			}
		}
	}
	return 0;	
}
