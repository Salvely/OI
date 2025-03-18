#include <iostream>
using namespace std;
int main(void)
{
	char c;
	cin >> c;
	switch(c) {
		case 'G':
			cout << "Hello, my master!" << endl;
			break;
		case 'N':
			cout << "I'm Xiaoluo." << endl;
			break;
		case 'S':
			cout << "Teinei teinei teinei~" << endl;
			break;
		case 'B':
		case 'Q':
			cout << "Bye bye!" << endl;
			break;
		default:
			cout << "Sorry..." << endl;
			break;
	}
	return 0;
}
