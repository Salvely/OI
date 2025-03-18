#include <iostream>
#include <stdbool.h>
#define PI 3.14
bool isPerfect(int num) {
	int i = (int)sqrt(num);
	return i * i == num;
}

int dist(int x1, int y1, int z1, int x2, int y2, int z2) {
	int delta_x = abs(x1 - x2);
	int delta_y = abs(y1 - y2);
	int delta_z = abs(z1 - z2);
	return sqrt(pow(delta_x,2) + pow(delta_y,2) + pow(delta_z,2));
}

double volume(double r, double h) {
	return (1.0 / 3) * PI * pow(r,2) * h;
}

string wipeSpace(string s) {
	string str;
	for(char ch:s) {
		if(ch != ' ')
			str += ch;
	}
	return str;
}

int digitSum(int num) {
	int sum = 0;
	while(num != 0) {
		digit = num % 10;
		num = num / 10;
		sum += digit;
	}
	return sum;
}

int avg(int arr[], int len) {
	double sum = 0;
	for(int i = 0; i < len; i++) 
		sum += arr[i];
	return sum / len;
}
