#include <iostream>
using namespace std;

int main() {
    float x;
    int heat;
    cin >> x;
    if (x < 30.0 || x > 50.0) {
        return 1;
    }
    if (x >= 38.0) {
        heat = 1;
    } else if (x >= 37.5 && x < 38.0) {
        heat = 2;
    } else if (x < 37.5) {
        heat = 3;
    }
    cout << heat << endl;
    return 0;
}