#include <iostream>
using namespace std;

int main() {
    float term, meter;
    float sec;
    term = 60 * 60;
    meter = 110 * 1000;
    sec = term / meter * 2;
    cout << "1小時有" << term << "秒" << endl;
    cout << "110公里有" << meter << "公尺" << endl;
    cout << "瞬間移動2公尺需" << sec << "秒" << endl;

    return 0;
}