#include <iostream>
using namespace std;

int main() {
  int n1, n2, n3, n4, n5, temp;
  cout << "請輸入數字1：" << endl;
  cin >> n1;
  cout << "請輸入數字2：" << endl;
  cin >> n2;
  cout << "請輸入數字3：" << endl;
  cin >> n3;
  cout << "請輸入數字4：" << endl;
  cin >> n4;
  cout << "請輸入數字5：" << endl;
  cin >> n5;
  if (n1 > n2) {
    temp = n1;
    n1 = n2;
    n2 = temp;
  }
  if (n2 > n3) {
    temp = n2;
    n2 = n3;
    n3 = temp;
  }
  if (n3 > n4) {
    temp = n3;
    n3 = n4;
    n4 = temp;
  }
  if (n4 > n5) {
    temp = n4;
    n4 = n5;
    n5 = temp;
  }
  cout << "最大值：" << n5 << endl;
  if (n1 < n2) {
    temp = n1;
    n1 = n2;
    n2 = temp;
  }
  if (n2 < n3) {
    temp = n2;
    n2 = n3;
    n3 = temp;
  }
  if (n3 < n4) {
    temp = n3;
    n3 = n4;
    n4 = temp;
  }
  if (n4 < n5) {
    temp = n4;
    n4 = n5;
    n5 = temp;
  }
  cout << "最小值：" << n5 << endl;
  //code by. PTHS s110149
}