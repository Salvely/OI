#include <iostream>
using namespace std;
int main(void)
{
	char arr[] = {'.','.','.'};
	arr[1] = 'X';
	arr[2] = 'X';
	for(int i = 0; i < 3; i++)
		cout << arr[i];
	return 0;
}
