#include <iostream>
using namespace std;
int main(void)
{
	int x;
	cin >> x;
	cout << "Today, I ate ";
	if(x == 1) {
		cout << "1 apple." << endl;
	}
	else if(x == 0) {
		cout << "0 apple." << endl;
	}
	else if(x > 1) {
		cout << x << " apples." << endl;
	}
	else{
		return 1;
	}
	return 0;
}
