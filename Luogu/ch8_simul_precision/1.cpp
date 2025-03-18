#include <iostream>
using namespace std;
int main(void)
{
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
	string game;
	char ch;
	while((ch = getchar()) != 'E') {
		if(ch != '\n' && ch != ' ')
			game += ch;	
	}
	game += 'E';
	
	int Wp = 0;
	int Lp = 0;	
	for(char ch: game) {
		if((abs(Wp-Lp) >= 2 && (Wp >= 11 || Lp >= 11))) {
			cout << Wp << ":" << Lp << endl;
			Wp = 0; 
			Lp = 0;
		}
		if(ch == 'E') {
			cout << Wp << ":" << Lp << endl;
			break;
		}
		if(ch == 'W') {
			Wp += 1;
		}
		else {
			Lp += 1;
		}
	}

	cout << endl;

	Wp = 0;
	Lp = 0;
	for(char ch: game) {
		if(((abs(Wp-Lp) >= 2) && (Wp >= 21 || Lp >= 21))) {
			cout << Wp << ":" << Lp << endl;
			Wp = 0;
			Lp = 0;
		}
		if(ch == 'E') {
			cout << Wp << ":" << Lp << endl;
			break;
		}	
		if(ch == 'W') {
			Wp += 1;
		}
		else {
			Lp += 1;
		}
	}
	cout << endl;
	return 0;
}
