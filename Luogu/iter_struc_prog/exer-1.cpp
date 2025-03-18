#include <iostream>
#include <climits>
using namespace std;
int main(void) {
	int max = INT_MIN;
	int index = -1;
	int num;
	int count = 1;
	while(cin >> num) {
		if(num > max) {
			max = num;
			index = count;
		}
		count ++;
	}	
	cout << "The maximum number: " << max << endl;
	cout << "Index: " << index << endl;
	return 0;
}
