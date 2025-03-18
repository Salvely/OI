#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
	double one_year_depos, five_year_depos, money;
	cin >> one_year_depos >> five_year_depos >> money;
	one_year_depos /= 100;
	five_year_depos /= 100;
	double uim = money*5*five_year_depos+10000;
	double a = money;
	a = a*(1+one_year_depos);
	a = a*(1+one_year_depos);
	a = a*(1+one_year_depos);
	a = a*(1+one_year_depos);
	a = a*(1+one_year_depos);
	cout << a << " " << uim << endl;
	return 0;
}
