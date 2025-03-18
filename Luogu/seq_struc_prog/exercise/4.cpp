#include <iostream>
using namespace std;
int main(void){
	int per1, left1, per2, left2;
	cin >> per1 >> left1 >> per2 >> left2;
	int num, total;
	num = (left1 - left2) / (per2 - per1);
	total = left1 + per1 * num;
	cout << num << " " << total << endl;
	return 0;
}
