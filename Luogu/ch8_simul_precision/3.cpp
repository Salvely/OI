#include <iostream>
using namespace std;
typedef struct person {
	int direction;
	string name;
}person_t;
int main(void)
{
	int n,m;
	cin >> n >> m;
	person_t arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i].direction >> arr[i].name;
	}
	int current = 0;
	for(int i = 0; i < m; i++) {
		int dir;
		int num;
		cin >> dir >> num;
		if(arr[current].direction == 0) {
			if(dir == 0) {
				current = (current - num + n) % n;		
			}
			else {
				current = (current + num) % n;
			}
		}
		else if(arr[current].direction == 1) {
			if(dir == 0) {
				current = (current + num) % n;
			}
			else {
				current = (current - num + n) % n;
			}
		}	
	}
	cout << arr[current].name << endl;
	return 0;
}
