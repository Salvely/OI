#include <iostream>
using namespace std;
int main(void)
{
	int a[100];
	int count = 0;
	while(cin >> a[count]) {
		if(a[count] == 0)
			break;
		count++;
	}
	for(int i = count - 1; i >= 0; i--) {
		cout << a[i] << endl;
	}
	return 0;
}
