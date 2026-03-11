#include <iostream>
#define N 200000
using namespace std;

int main() {
    int n, i, x[N];
    int diff;
    long long moves = 0;
    cin >> n;
    if (n < 1 || n > N) {
        return 1;
    }
    for (i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (i = 0; (i + 1) < n; i++) {
        if (x[i] > x[i + 1]) {
            diff = x[i] - x[i + 1];
            x[i + 1] += diff;
            moves += diff;
        }
    }
    cout << moves << endl;
    return 0;
}