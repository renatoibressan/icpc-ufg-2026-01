#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n >= (2 * m) - 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}