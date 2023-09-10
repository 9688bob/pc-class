#include <iostream>
using namespace std;

int main() {
    float volume, radius, height;
    cout << "請輸入半徑 高度：";
    cin >> radius >> height;
    volume = 3.14159 * radius * radius * height;
    //code by. PTHS s110149
    cout << "圓柱體體積為：" << volume;

    return 0;
}