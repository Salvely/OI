#include <cstdio>
#include <iostream>
using namespace std;
int main(void){
	int a,b,c;
	int min, middle, max;
	scanf("%d %d %d",&a,&b,&c);
	if(a >= b && a >= c) {
		max = a;
		if(b >= c) {
		 	min = c;
			middle = b;
		}
		else {
			min = b;
			middle = c;
		}		
	}
	else if(b >= a && b >= c) {
		max = b;
		if(c >= a) {
			middle = c;
			min = a;
		}
		else {
			middle = a;
			min = c;
		}
	}
	else {
		max = c;
		if(a >= b) {
			middle = a;
			min = b;
		}
		else {
			middle = b;
			min = a;
		}
	}
	cout << min << " " << middle << " " << max << endl;
	return 0;
}	
