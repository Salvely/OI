#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	int n, m;
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	cin >> n >> m;
	int grade[n];
	int i = 0;
	int temp = n;
	while(temp--) {
		int score[m];
		int sum = 0;
		for(int j = 0; j < m; j++) {
			cin >> score[j];
			sum += score[j];
		}
		int max = -1;
		int min = 11;
		for(int j = 0; j < m; j++) {
			if(score[j] > max) {
				max = score[j];
			}
			if(score[j] < min) {
				min = score[j];
			}
		}
		sum -= (max + min);
		grade[i] = sum;
		i++;
	}
	
	int max = grade[0];	
	for(int i = 0; i < n; i++) {
		if(grade[i] > max) {
		       max = grade[i];
		}
	}
	printf("%.2f\n",double(max) / (m - 2));
	return 0;
}	
	
			
			
