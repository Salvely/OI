#include <iostream>
using namespace std;
int main(void)
{
	int L;
	cin >> L;
	for(int i = 1; i <= L; i++){
		cout << "Today, I ate " << i;
		if(i == 1)
			cout << " apple." << endl;
		else
			cout << " apples." << endl;
	}
	return 0;
}
