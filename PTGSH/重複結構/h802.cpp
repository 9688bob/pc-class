#include <iostream>
using namespace std;

int main() {
  int sum, s;
  sum = 0;
  s = 1;
  for (int i = 0; i < 10; i++) {
    int k;
    s++;
    cin >> k;
    sum = sum + k;
  }
  cout << "Total=" << sum << endl;
  //code by. PTHS s110149
}