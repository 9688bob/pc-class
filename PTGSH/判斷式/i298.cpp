#include <iostream>
using namespace std;

int main() {
  //判斷式： b^2−4ac
  float a, b, c, D;
  cin >> a;
  cin >> b;
  cin >> c;
  D = (b * b) - (4 * a * c);
  if (D < 0) { //無解  無實數解
    cout << "無實數解" << endl;
  }
  if (D == 0) { //重根 重根
    cout << "重根" << endl;
  }
  if (D > 0) { //異根  兩相異實根
    cout << "兩相異實根" << endl;
  }
  //code by. PTHS s110149
}