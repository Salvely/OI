#include<iostream>
using namespace std;
int main(void)
{
	int temp,a,b;
	cin >> a >> b;
	temp = a;
	a = b;
	b = temp;
	cout << a << " " << b  << endl;
	return 0;
}
