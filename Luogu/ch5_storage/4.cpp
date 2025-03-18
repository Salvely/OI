#include <iostream>
using namespace std;
int main(void)
{
	int l,m;
	cin >> l >> m;
	int arr[l+1];
	for(int i = 0; i <= l; i++) {
		arr[i] = 1;
	}	
	while(m--) {
		int a,b;
		cin >> a >> b;
		for(int i = a; i <= b; i++) {
			arr[i] = 0;
		}	
	}
	int sum = 0;
	for(int i = 0; i <= l; i++) {
		sum += arr[i];
	}
	cout << sum << endl;
}
