#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 2; i++) {
    int a, 百, 十, 個;
    cout << "請輸入一個百位數字：" << endl;
    cin >> a;
    百 = a / 100;
    十 = (a / 10) - (百 * 10);
    個 = a - (百 * 100) - (十 * 10);
    cout << 百 << endl;
    cout << 十 << endl;
    cout << 個 << endl;
  }
  //code by. PTHS s110149
}