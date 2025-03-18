#include <iostream>
using namespace std;
int main(void)
{
	freopen("diagram.in","r",stdin);
	freopen("diagram.out","w",stdout);
	string line;
	int count[26];
	for(int i = 0; i < 26; i++) 
		count[i] = 0;
	char ch;
	while(scanf("%c",&ch) == 1) {
		if(ch == ' ')
			continue;
		int offset = ch - 'A';
		count[offset] ++;		
	}
	int max = 0;
	for(int i = 0; i < 26; i++) {
		if(count[i] > max)
			max = count[i];
	}
	int row = max + 1;
	int col = 26;
	int output[row][col];
	for(int j = 0; j < 26; j++)
		output[max][j] = (char)('A' + j);
	for(int i = 0; i < max; i++) 
		for(int j = 0; j < 26; j++)
			output[i][j] = ' ';
	for(int j = 0; j < 26; j++) {
		for(int i = max - count[j]; i <= max - 1; i++) {
			output[i][j] = '*';
		}
	}
	for(int i = 0; i < max + 1; i++) {
		for(int j = 0; j < 26; j++) {
			cout << (char)output[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}	
