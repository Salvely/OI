#include <iostream>
using namespace std;
int main(void){
	double a_rate = 5;
	double b_rate = 8;
	double dist = 100;
	double relative_rate = b_rate - a_rate;
	double ans = dist / relative_rate;
	cout << ans << endl;
	return 0;
}
