#include <iostream>
using namespace std;

int main() {
  int a, 判斷奇偶;
  cout << "請輸入一個整數：" << endl;
  cin >> a;
  判斷奇偶 = a % 2;
  if (判斷奇偶 == 1) {
    cout << a << "是奇數" << endl;
  }
  if (判斷奇偶 == 0) {
    cout << a << "是偶數" << endl;
  }
  //code by. PTHS s110149
}