#include <iostream>
using namespace std;

int main() {
    int i = 231;
    float f = 3.14159;
    double d = 0.142857 * 0.000000001;
    char c = 'h';
    bool b = false;

    cout << i << " sizeof(int) : " << sizeof(int) << endl;
    cout << f << " sizeof(float) : " << sizeof(float) << endl;
    cout << d << " sizeof(double) : " << sizeof(double) << endl;
    //code by. PTHS s110149
    cout << c << " sizeof(char) : " << sizeof(char) << endl;
    cout << b << " sizeof(bool) : " << sizeof(bool) << endl;

    return 0;
}