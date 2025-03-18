#include <iostream>
using namespace std;
typedef struct student {
	string name;
	int grade[3];
}student_t;
int main(void)
{
	int N;
	cin >> N;
	student_t arr[N];
	int max_student = 0;
	int max_grade = 0;
	for(int i = 0; i < N; i++) {
		cin >> arr[i].name;
		int sum = 0;
		for(int j = 0; j < 3; j++) { 
			cin >> arr[i].grade[j];
			sum += arr[i].grade[j];	
		}	
		if(sum > max_grade) {
			max_student = i;	
			max_grade = sum;
		}
	}
	student_t s = arr[max_student];
	cout << s.name << " " << s.grade[0] << " " << s.grade[1] << " " << s.grade[2] << endl;
	return 0;
}
