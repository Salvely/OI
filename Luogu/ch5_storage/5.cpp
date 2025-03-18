#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
int main(void)
{
	int N;
	cin >> N;
	int grade[N][3];
	for(int i = 0; i < 3; i++) {
		cin >> grade[i][0] >> grade[i][1] >> grade[i][2];
	}
	int count = 0;
	for(int i = 0; i < N-1; i++) {
		for(int j = i+1; j < N; j++) {
			int diff1 = abs(grade[i][0] - grade[j][0]);
			int diff2 = abs(grade[i][1] - grade[j][1]);
			int diff3 = abs(grade[i][2] - grade[j][2]);
			int grade1 = accumulate(grade[i],grade[i]+3,0);
			int grade2 = accumulate(grade[j],grade[j]+3,0);
			int diff_grade = abs(grade1 - grade2);
			if(diff1 <= 5 && diff2 <= 5 && diff3 <= 5 && diff_grade <= 10) {
				count ++;
			}
		}
	}
	cout << count << endl;
	return 0;
}

