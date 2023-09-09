#include <cmath>
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
    float ans;
    ans = -b / (2 * a);
    cout << ans << endl;
  }
  if (D > 0) { //異根  兩相異實根
    float ans1, ans2;
    ans1 = (-b + sqrt(D)) / (2 * a);
    ans2 = (-b - sqrt(D)) / (2 * a);
    cout << ans1 << " " << ans2 << endl;
  }
  //code by. PTHS s110149
}