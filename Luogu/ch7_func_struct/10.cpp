#include <iostream>
#include <stdbool.h>
using namespace std;
typedef struct student {
	string name;
	int chinese;
	int math;
	int english;
	int total;
} student_t;
int main(void)
{
	int N;
	cin >> N;
	student_t arr[N];
	for(int i = 0; i < N; i++) {
		cin >> arr[i].name >> arr[i].chinese >> arr[i].math >> arr[i].english;
		arr[i].total = arr[i].chinese + arr[i].math + arr[i].english;
	}
	for(int i = 0; i < N -1 ; i++) {
		for(int j = i + 1; j < N; j++) {
			bool c_comp = abs(arr[i].chinese - arr[j].chinese) <= 5;
			bool m_comp = abs(arr[i].math - arr[j].math) <= 5;
			bool e_comp = abs(arr[i].english - arr[j].english) <= 5;
			bool total_comp = abs(arr[i].total - arr[j].total) <= 10;
			if(c_comp && m_comp && e_comp && total_comp) {
				if(arr[i].name < arr[j].name) {
					cout << arr[i].name << " " << arr[j].name << endl;
				}
				else {
					cout << arr[j].name << " " << arr[i].name << endl;
				}
			}
		}
	}
	return 0;
}	
