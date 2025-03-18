#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	int n,n1,p1,n2,p2,n3,p3;
	cin >> n >> n1 >> p1 >> n2 >> p2 >> n3 >> p3;
	int t1 = ceil(n / n1) * p1;
	int t2 = ceil(n / n2) * p2;
	int t3 = ceil(n / n3) * p3;
	int total = t1;
	if(t2 < total)
		total = t2;
	if(t3 < total)
		total = t3;
	cout << total << endl;
	return 0;
}	
