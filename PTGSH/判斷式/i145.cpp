#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "請輸入整數分數：" << endl;
  cin >> a;
  if (a >= 90 && a <= 100) {
    cout << "你的分數為" << a << "，等第為A" << endl;
  }
  if (a >= 80 && a <= 89) {
    cout << "你的分數為" << a << "，等第為B" << endl;
  }
  if (a >= 70 && a <= 79) {
    cout << "你的分數為" << a << "，等第為C" << endl;
  }
  if (a >= 60 && a <= 69) {
    cout << "你的分數為" << a << "，等第為D" << endl;
  }
  if (a >= 0 && a <= 59) {
    cout << "你的分數為" << a << "，等第為F" << endl;
  }
  //code by. PTHS s110149
}