#include <iostream>
using namespace std;
void swap(int& a, int& b);
int main(void)
{
	int a,b;
	cin >> a >> b;
	swap(a,b);
	cout << a << " " << b << endl;
	return 0;
}
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
