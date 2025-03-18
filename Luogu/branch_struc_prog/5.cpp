#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	if(5*n >= 11 + 3*n){
		cout << "Luogu" << endl;
	}
	else {
		cout << "Local" << endl;
	}
	return 0;
}	
