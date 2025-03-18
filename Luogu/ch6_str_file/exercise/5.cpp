#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
int main(void)
{
	string map[21] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
	string s;
	getline(cin,s);
	istringstream is(s);
	
	int digits[6];
	for(int i = 0; i < 6; i++)
		digits[i] = 0;
	int j = 0;
	string word;
	while(is >> word) {
		int num = -1;
		for(int i = 0; i < 21; i++) {
			if(word == map[i]) {
				num = i;
				break;
			}
		}
		if(word == "a" || word == "another" || word == "first") {
			num = 1;
		}
		else if(word == "both" || word == "second") {
			num = 2;
		}
		else if(word == "third") {
			num = 3;
		}
		if(num != -1) {
			num = (num * num) % 100;
			digits[j] = num;
			j++;
		}
	}
	sort(digits,digits + j);
	char str[100];
	for(int i = 0; i < j; i++) {
		sprintf(str+2*i,"%02d",digits[i]);
	}
	char* end;
	int base = 10;
	cout << strtoull(str,&end,base) << endl;
	return 0;
}
	
