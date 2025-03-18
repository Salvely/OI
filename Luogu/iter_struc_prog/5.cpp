#include <iostream>
#include <cstdlib>
using namespace std;
int getRand(int min, int max);
int main(void)
{
	int num = getRand(1,100);
	int guess;
	do {
		cin >> guess;
		if(guess < num) {
	       		cout << "Too small!" << endl;
	       }
	       else if(guess > num) {
			cout << "Too large!" << endl;
	       }
		else {
			cout << "Bingo!" << endl;
		}

	}
	while(num != guess);
	return 0;	
}	
int getRand(int min, int max) {	
	return (rand() % (max - min + 1)) + min;
}	
