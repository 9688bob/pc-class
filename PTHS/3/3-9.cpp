#include <iostream>
using namespace std;

int main() {
    const int RADIUS = 2;
    const int HEIGHT = 10;
    const float PI = 3.14159;
    //code by. PTHS s110149
    float volume;

    //RADIUS = RADIUS * 2
    volume = PI * RADIUS * RADIUS * HEIGHT;
    cout << volume;
    
    return 0;
}