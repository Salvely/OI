#include <iostream>
#include <cmath>
#include <stdbool.h>
using namespace std;
bool isPrime(int num);
int main(void)
{
        long long sum = 0;
        int L;
        cin >> L;
        int num = 2;
        int count = 0;
        while(sum <= L) {
                if(isPrime(num)) {
                        if(sum + num > L)
                            break;
                        sum += num;
                        cout << num << endl;
                        count += 1;
                }
                num ++;
        }
        cout << count << endl;
        return 0;
}

bool isPrime(int num) {
        if(num != 2 && num % 2 == 0) {
            return false;
        }
        for(int i = 2; i <= sqrt(num); i++) {
                if(num % i == 0) {
                        return false;
                }
        }
        return true;
}
