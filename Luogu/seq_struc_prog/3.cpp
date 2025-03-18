#include <iostream>
#include <cmath>
#define PI 3.141593
using namespace std;
int main(void){
	double r1 = 4;
	double r2 = 10;
	double v = (4/3.0)*PI*(pow(r1,3)+pow(r2,3));
	cout << (int)pow(v,1.0/3) << endl;
	return 0;
}
