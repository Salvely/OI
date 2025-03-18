#include <iostream>
#include <stdbool.h>
using namespace std;
bool isPrime(long long num);
int main(void)
{
	int arr[100];
	for(int i = 0; i < 100; i++)
		arr[i] = 0;
	int n;
	cin >> n;
	int i = 0;
	while(n--) {
		int num;
		cin >> num;
		if(isPrime(num)) {
			arr[i] = num;
			i++;
		}
	}
	for(int j = 0; j < i; j++) {
		cout << arr[j] << " ";
	}
	cout << endl;
	return 0;
}
bool isPrime(long long num) {
	if(num <= 1) 
		return false;
	else if(num == 2)
		return true;
	else if(num % 2 == 0)
		return false;
	for(int i = 2; i * i <= num; i++) {
		if(num % i == 0) {
			return false;
		}
	}
	return true;
}	
