#include <iostream>
#include <algorithm>
using namespace std;
int a1[500],a2[500];
int main(void)
{
//	freopen("4.in","r",stdin);
//	freopen("4.out","w",stdout);
	string s1,s2;
	cin >> s1 >> s2;
	int i = 0;
	for(char ch:s1) {
		a1[i] = ch - '0';
		i++;
	}	
	int j = 0;
	for(char ch:s2) {
		a2[j] = ch - '0';
		j++;
	}	
	int sum[1000];
	for(int i = 0; i < 1000; i++) 
		sum[i] = 0;
	int s_index = 0;
	int carry = 0;
	if(i == j) {
		for(int k = j-1; k >= 0; k--) {
			int s = carry + a1[k] + a2[k];
			carry = s / 10;
			s = s % 10;		
			sum[s_index] = s;
			s_index ++;	
		}
		sum[s_index] = carry;
	}
	else if(i < j) {
		for(int k = 1; k <= i; k++) {
			int a1_index = i - k;
			int a2_index = j - k;
			int s = carry + a1[a1_index] + a2[a2_index];
			carry = s / 10;
			s = s % 10;
			sum[s_index] = s;
			s_index ++;
		}	
		for(int k = j-i-1; k >= 0; k--) {
			int s = carry + a2[k];
			carry = s / 10;
			s = s % 10;
			sum[s_index] = s;
			s_index ++;
		}
		sum[s_index] = carry;
	}
	else {
		for(int k = 1; k <= j; k++) {
			int a1_index = i - k;
			int a2_index = j - k;
			int s = carry + a1[a1_index] + a2[a2_index];
			carry = s / 10;
			s = s % 10;
			sum[s_index] = s;
			s_index ++;
		}	
		for(int k = i - j- 1; k >= 0; k--) {
			int s = carry + a1[k];
			carry = s / 10;
			s = s % 10;
			sum[s_index] = s;
			s_index ++;
		}
		sum[s_index] = carry;
	}
	while(sum[s_index] == 0) { s_index --;}
	if(s_index < 0) {
		cout << 0 << endl;
		return 0;
	}
	for(int i = s_index; i >= 0; i--) {
		cout << sum[i];
	}
	cout << endl;
	return 0;
}	
	
