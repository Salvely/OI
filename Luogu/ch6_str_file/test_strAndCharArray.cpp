#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
	char arr[10];
	string s = "LUOGU";
//	int len = s.copy(arr,9);
//	arr[len] = '\0';
//	strcpy(arr,s.c_str());
	strcpy(arr,"LUOGU");
	s = arr;
	cout << s << endl;
	cout << arr << endl;
	
	
	return 0;
}
