#include <iostream>
using namespace std;
int main(void)
{
	int lamp[2000000];
	for(int i = 0; i < 2000000; i++)
		lamp[i] = 0;
	int n;
	cin >> n;
	while(n--) {
		double a;
		int t;
		cin >> a >> t;
		for(int i = 1; i <= t; i++) {
			int lamp_i = int(a * i);
			lamp[lamp_i] = 1 - lamp[lamp_i];
		}		
	}
	for(int i = 0; i < 2000000; i++)
		if(lamp[i] == 1) {
			cout << i << endl;
			break;
		}
	return 0;
}
