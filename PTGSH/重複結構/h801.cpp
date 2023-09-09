#include <iostream>
using namespace std;

int main() {
  float k, s; //k輸入數字 s輸入總額
  int c;   //輸入資料數量
  s = 0;
  c = 0;
  while (c != 10) {
    cin >> k;
    s = s + k;
    c++;
  }
  if (c == 10) {
    float Av;
    Av = s / c;
    cout << "Total=" << s << endl;
    cout << "Average=" << Av << endl;
  }
  //code by. PTHS s110149
}