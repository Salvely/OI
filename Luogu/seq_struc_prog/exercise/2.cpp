#include <iostream>
using namespace std;
int main(void){
	int sum, delta;
	cin >> sum >> delta;
	double x = 0.5 * (sum + delta);
	double y = sum - x;
	cout << x * y << endl;
	return 0;
}

