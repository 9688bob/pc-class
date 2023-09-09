#include <iostream>
using namespace std;

int main() {
  int a, b;  
  a = 0;
  b = 1;
  for (int i = 0; i < 100; i++) {
    a = a + b;
    b++;
  }
  cout << a << endl;
  //code by. PTHS s110149
}