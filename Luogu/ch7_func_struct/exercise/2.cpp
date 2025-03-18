#include <iostream>
#include <string>
using namespace std;
const int MAXN = 100000;
int a,b,c, array[MAXN];
bool check(int x, int y, int z) {
	return x <= y + z && y <= x + z;
}
void add(int a, int b) {
	c = a + b;
}
int multi() {
	return a * b;
}

int main(void)
{
	int c = 3;
	cin >> a >> b;
	add(c,a);
	b = multi();
	if(check(a,b,c)) 
		cout << a;
	else
		cout << c;
	return 0;
}
	
