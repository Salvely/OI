#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	int arr[8];
	for(int i = 0; i <= 7; i++)
		arr[i] = 0;
	int win_arr[7];
	for(int i = 0; i < 7; i++)
		cin >> win_arr[i];
	sort(win_arr,win_arr+7);

	while(n--) {
		int count = 0;
		for(int i = 0; i < 7; i++) {
			int num;
			cin >> num;
			if(find(win_arr,win_arr+7,num) != win_arr+7)
				count ++;
		}
		arr[count] ++;
	}
	for(int i = 7; i >= 1; i--)
		cout << arr[i] << " ";
	return 0;
}	
