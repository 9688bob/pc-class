#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    a = 13579;
    b = a / 10000;
    c = a / 1000 % 10;
    //code by. PTHS s110149
    d = a / 100 % 10;
    e = a / 10 % 10;
    f = a % 10;
    cout << b << ' ' << c << ' ' << d << ' ' << e << ' ' << f << endl;
    
    return 0;
}