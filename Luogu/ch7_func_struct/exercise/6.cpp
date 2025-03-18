#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
int main(void)
{
	int a[30];
	for(int i = 0; i < 30; i++) {
		a[i] = 0;
	}
	string line;
	getline(cin,line);
	istringstream is(line);
	
	string num;
	int count = 0;
	long long sum = 0;
	while(is >> num) {
		a[count] = stoi(num);
		sum += a[count];
		count++;
	}
	sum *= pow(2,count-1);
	cout << sum << endl;

	return 0;
}	
	
	
	
		
	
