#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	int min = 1001;
	for(int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		if(a < min)
			min = a;
	}
	cout << min << endl;
	return 0;
}

