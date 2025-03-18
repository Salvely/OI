#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	cout << rand() << endl;
	int a, b;
	a = 5;
	b = 50;
	srand(time(0));
	cout << rand() % (b - a + 1) + a << endl;
	return 0;
}
