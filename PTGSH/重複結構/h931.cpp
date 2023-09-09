#include <iostream>
using namespace std;

int main() {
  int a, b;
  a = b = 1;
  while (a != 10) {
    cout << a << "*" << b << "=" << a * b << endl;
    b++;
    if (b == 10) {
      a++;
      b = 1;
    }
  }
  //code by. PTHS s110149
}