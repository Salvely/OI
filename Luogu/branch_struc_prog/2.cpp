#include <iostream>
#include <stdbool.h>
using namespace std;
bool even(int num);
bool between(int num);
bool Xor(bool a, bool b);
int main(void)
{
	int num;
	cin >> num;
	bool a = even(num);
	bool b = between(num);
	cout << (a && b) << endl;
	cout << (a || b) << endl;
	cout << Xor(a,b)  << endl;
	cout << !(a || b) << endl;
	return 0;
}

bool even(int num)
{
	return num % 2 == 0;
}

bool between(int num)
{
	return (num > 4) && (num <= 12);
}

bool Xor(bool a, bool b)
{
	return (a && !b)||(b && !a);
}
	
