#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "請輸入公斤數：" << endl;
  cin >> a;
  int need = 190 * a;
  cout << "共" << a << "公斤的木材，炭治郎需要花費" << need / 60 << "分"
       << need % 60 << "秒" << endl;
  //code by. PTHS s110149
}