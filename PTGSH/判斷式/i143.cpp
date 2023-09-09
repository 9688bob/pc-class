#include <iostream>
using namespace std;

int main() {
  int a, 百, 十, 個;
  cout << "請輸入一個百位數字：" << endl;
  cin >> a;
  百 = a / 100;
  十 = (a / 10) - (百 * 10);
  個 = a - (百 * 100) - (十 * 10);

  if (百 % 3 == 0) {
    cout << "百位數" << 百 << "是3的倍數" << endl;
  }
  if (百 % 3 != 0) {
    cout << "百位數" << 百 << "不是3的倍數" << endl;
  }
  if (十 % 3 == 0) {
    cout << "十位數" << 十 << "是3的倍數" << endl;
  }
  if (十 % 3 != 0) {
    cout << "十位數" << 十 << "不是3的倍數" << endl;
  }
  if (個 % 3 == 0) {
    cout << "個位數" << 個 << "是3的倍數" << endl;
  }
  if (個 % 3 != 0) {
    cout << "個位數" << 個 << "不是3的倍數" << endl;
  }
  //code by. PTHS s110149
}