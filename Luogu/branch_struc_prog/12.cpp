#include <iostream>
using namespace std;
int main(void){
	int d1,d2,d3,d4,d5,d6,d7,d8,d9;
	char ch;
	scanf("%d-%d%d%d-%d%d%d%d%d-%c",&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9,&ch);
	int sum = d1 + 2 * d2 + 3 * d3 + 4 * d4+ 5 * d5 + 6 * d6 + 7 * d7 + 8 * d8 + 9 * d9;
	int remainder = sum % 11;
		if((remainder == 10 && ch == 'X') || remainder == (ch - '0')) {
			cout << "Right" << endl;
		}
		else {
			printf("%d-%d%d%d-%d%d%d%d%d-%c", d1, d2, d3, d4, d5, d6, d7, d8, d9, remainder + '0');
		}
	return 0;
}

