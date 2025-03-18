#include <iostream>
#include <stdbool.h>
#include <cmath>
using namespace std;
int main(void)
{
	int L;
	cin >> L;
	int sum = 0;
	int count = 0;
	int num = 2;
	while(sum <= L) {
		bool isPrime = true;
		for(int i = 2; i <= sqrt(num); i++) {
			if(num % i == 0) {
				isPrime = false;
				break;
			}
		}
		if(sum + num > L) 
			break;
		if(isPrime) {
			cout << num << endl;
			count += 1;
			sum += num;
		}
		num ++;		
	}
	cout << count << endl;
	return 0;
}	
