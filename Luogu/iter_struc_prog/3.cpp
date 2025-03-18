#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	int n,k;
	cin >> n >> k;
	int sum_a = 0;
	int count_a = 0;
	int sum_b = 0;
	int count_b = 0;
	for(int i = 1; i <= n; i++){
		if(i % k == 0) {
			sum_a += i;
			count_a ++;
		}
		else {
			sum_b += i;
			count_b ++;
		}
	}
	double averg_a = sum_a * 1.0 / count_a;
	double averg_b = sum_b * 1.0 / count_b;	
	cout << fixed << setprecision(1) << averg_a << " " << fixed << setprecision(1) << averg_b << endl;	
	return 0;
}
