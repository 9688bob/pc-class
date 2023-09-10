#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "a = 4, b = 2" << endl;

    a = 4, b = 2;
    a += b;
    cout << "a += b, a = " << a << endl;

    a = 4, b = 2;
    a -= b;
    cout << "a -= b, a = " << a << endl;

    a = 4, b = 2;
    a *= b;
    cout << "a *= b, a = " << a << endl;

    a = 4, b = 2;
    //code by. PTHS s110149
    a /= b;
    cout << "a /= b, a = " << a << endl;

    a = 4, b = 2;
    a %= b;
    cout << "a %= b, a = " << a << endl;

    a = 4, b = 2;
    a++;
    b--;
    cout << "a++ = " << a << endl;
    cout << "b-- = " << b << endl;

    return 0;
}