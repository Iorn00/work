#include<iostream>
#include<string>
using namespace std;

int main() {
  int a,b,c,x,y,z;
  cin >> x >> y >> z;
  string seq;
  cin >> seq;
  if (x > y && y > z) {
    c = x;
    b = y;
    a = z;
  }
  else if (x > z && z > y) {
    c = x;
    b = z;
    a = y;
  }
  else if (y > x && x > z) {
    c = y;
    b = x;
    a = z;
  }
  else if (y > z && z > x) {
    c = y;
    b = z;
    a = x;
  }
  else if (z > x && x > y) {
    c = z;
    b = x;
    a = y;
  }
  else if (z > y && y > x) {
    c = z;
    b = y;
    a = x;
  }
  for (int i = 0; i < 3; i++) {
    if (seq[i] == 'A') cout << a << " ";
    else if (seq[i] == 'B') cout << b << " ";
    else if (seq[i] == 'C') cout << c << " ";
  }
  return 0;
}