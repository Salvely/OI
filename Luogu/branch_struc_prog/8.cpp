#include <iostream>
using namespace std;
int main(void) {
  int a, b, c;
  cin >> a >> b >> c;
  int min, middle, max;
  int less, more;
  if (a <= b) {
    less = a;
    more = b;
  } else {
    less = b;
    more = a;
  }
  if (c <= less) {
    min = c;
    middle = less;
    max = more;
  } else if (c >= more) {
    min = less;
    middle = more;
    max = c;
  } else {
    min = less;
    middle = c;
    max = more;
  }
  cout << min << " " << middle << " " << max << endl;
  return 0;
}

