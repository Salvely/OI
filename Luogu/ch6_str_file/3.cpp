#include <iostream>
#include <stdbool.h>
#include <cmath>
#include <algorithm>
#include <string.h>
using namespace std;
bool isPrime(int num);
int main(void)
{
	string s;
	cin >> s;
	int count[26];
	for(int i = 0; i < 26; i++)
		count[i] = 0;
	int len = s.length();
	for(char ch: s) {
		count[ch - 'a'] ++;
	}
	sort(count,count+26);
	int min = 0;
	for(int i = 0; i <= 25; i++)
		if(count[i] != 0) {
			min = count[i];
			break;
		}
	int max = count[25];
	int diff = abs(max - min);
	if(isPrime(diff)) {
		cout << "Lucky Word" << endl;
		cout << diff << endl;
	}
	else {
		cout << "No Answer" << endl;
		cout << 0 << endl;
	}
	return 0;
}	
bool isPrime(int num) {
	if(num == 0 || num == 1)
		return false;
	if(num == 2)
		return true;
	else if(num % 2 == 0)
		return false;
	for(int i = 2; i * i <= num; i++) {
		if(num % i == 0)
			return false;
	}
	return true;
}
