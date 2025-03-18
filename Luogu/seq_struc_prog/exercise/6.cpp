#include <iostream>
using namespace std;
int main(void)
{
	int head, feet;
	cin >> head >> feet;
	int x,y;
	x = (feet - 2 * head) / 2;
	y = head - x;
	cout << x << " " << y << endl;
	return 0;
}
