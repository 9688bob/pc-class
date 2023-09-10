#include <iostream>
using namespace std;

int main() {
    int A = 1, B = 0;

    cout << "A = 1, B = 0" << endl;
    cout << "A AND B is " << (A && B) << endl;
    cout << "A OR B  is " << (A || B) << endl;
    //code by. PTHS s110149
    cout << "NOT A   is " << (!A) << endl;
    cout << "NOT B   is " << (!B) << endl;
    cout << "A XOR B is " << (A ^ B);

    return 0;
}