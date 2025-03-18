#include <iostream>
using namespace std;
int main(void)
{
	float a = 0.1;
	printf("%d\n",int(2-a*a*100));
	printf("%.10f",2-a*a*100);
	return 0;
}
