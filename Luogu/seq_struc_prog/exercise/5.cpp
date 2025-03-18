#include <iostream>
using namespace std;
int main(void)
{
	int a, uim, ahead_time;
	cin >> a >> uim >> ahead_time;
	int v_delta = a - uim;
	int uim_total = uim * ahead_time;
	int min = uim_total / v_delta;
	cout << min << endl;
	return 0;
}
