#include <iostream>
using namespace std;
int main(void)
{
	int t1, t2;
	int max_time = 8, max_day = 0;
	cin >> t1 >> t2;
	if(t1 + t2 > max_time) {
		max_time = t1 + t2;
		max_day = 1;
	}
	cin >> t1 >> t2;
	if(t1 + t2 > max_time) {
		max_time = t1 + t2;
		max_day = 2;
	}
	cin >> t1 >> t2;
       	if(t1 + t2 > max_time) {
		max_time = t1 + t2;
		max_day = 3;
	}	
cin >> t1 >> t2;
	if(t1 + t2 > max_time) {
		max_time = t1 + t2;
		max_day = 4;
	}
cin >> t1 >> t2;
	if(t1 + t2 > max_time) {
		max_time = t1 + t2;
		max_day = 5;
	}
cin >> t1 >> t2;
	if(t1 + t2 > max_time) {
		max_time = t1 + t2;
		max_day = 6;
	}
cin >> t1 >> t2;
	if(t1 + t2 > max_time) {
		max_time = t1 + t2;
		max_day = 7;
	}
	cout << max_time << " " << max_day << endl;
	return 0;
}
