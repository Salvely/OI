#include <iostream>
using namespace std;
typedef struct student {
	string name;
	int age;
	double grade;
}student_t;
int main(void)
{
	int N;
	cin >> N;
	student_t arr[N];
	for(int i = 0; i < N; i++) {
		cin >> arr[i].name >> arr[i].age >> arr[i].grade;
		arr[i].age += 1;
		arr[i].grade *= 1.2;
		if(arr[i].grade > 600)
			arr[i].grade = 600;
	}
	for(int i = 0; i < N; i++) {
		cout << arr[i].name << " " << arr[i].age << " " << arr[i].grade << endl;
	}
	return 0;
}	
	
