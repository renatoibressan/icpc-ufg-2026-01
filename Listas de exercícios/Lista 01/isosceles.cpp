#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool check = false;
    cin >> a >> b >> c;
    if (a == b || a == c || b == c) {
        check = true;
    }
    if (check) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}