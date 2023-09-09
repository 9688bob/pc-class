#include <iostream>
using namespace std;

int main() {
  float k, s; //k輸入數字 s輸入總額
  int c;   //輸入資料數量
  s = c = 0;
  while (k != -1) {
    cin >> k;
    s = s + k;
    c++;
  }
  if (k == -1) {
    float Av;
    s++;
    c = c - 1;
    Av = s / c;
    cout << "Total=" << s << endl;
    cout << "Average=" << Av << endl;
  }
  //code by. PTHS s110149
}