#include <iostream>
using namespace std;

int main() {
  int a1, a2, a3, b1, b2, b3;
  a1 = b1 = b2 = b3 = 1;
  a2 = 2;
  a3 = 3;
  while (a1 != 10) {
    string S1, S2, S3;
    if (a1 * b1 < 10) {
      S1 = " ";
    }
    if (a2 * b2 < 10) {
      S2 = " ";
    }
    if (a3 * b3 < 10) {
      S3 = " ";
    }
    cout << a1 << "*" << b1 << "=" << S1 << a1 * b1 << " " << a2 << "*" << b2
         << "=" << S2 << a2 * b2 << " " << a3 << "*" << b3 << "=" << S3
         << a3 * b3 << endl;
    b1++, b2++, b3++;
    if (b1 == 10) {
      a1 = a1 + 3;
      a2 = a2 + 3;
      a3 = a3 + 3;
      b1 = b2 = b3 = 1;
    }
  }
  //code by. PTHS s110149
}