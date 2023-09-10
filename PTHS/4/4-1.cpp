#include <iostream>
using namespace std;

int main() {
    float C, F;
    //code by. PTHS s110149
    cout << "請輸入華氏溫度：";
    cin >> F;
    C = (F - 32) * 5 / 9;
    cout << "華氏F：" << F << "度" << endl;
    cout << "攝氏C：" << C << "度" << endl;

    return 0;
}