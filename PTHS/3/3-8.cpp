#include <iostream>
using namespace std;

#define RADIUS 2
#define HEIGHT 10
#define PI 3.14159

int main() {
    float volume;

    volume = PI * RADIUS * RADIUS * HEIGHT;
    cout << volume;

    return 0;
}