#include <iostream>
#include <stdbool.h>
using namespace std;
typedef struct student {
	string id;
	int school;
	int outdoor;
	double gpa;
	int total() { return school + outdoor; }
}student_t;
bool good(student_t& s) {
	return (s.total() > 140) && ( s.gpa >= 80);
}
int main(void)
{
	int N;
	cin >> N;
	student_t arr[N];
	for(int i = 0; i < N; i++) {
		cin >> arr[i].id >> arr[i].school >> arr[i].outdoor;
		arr[i].gpa = 0.7 * arr[i].school + 0.3 * arr[i].outdoor;
		if(good(arr[i])) {
			cout << "Excellent" << endl;
		}
		else {
			cout << "Not excellent" << endl;
		}
	}
	return 0;
}
	
