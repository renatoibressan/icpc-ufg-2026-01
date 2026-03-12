#include <iostream>
#define N 100
using namespace std;

int main() {
    int n, i, a[N];
    int primeiro = 0, segundo = 0;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > primeiro) {
            segundo = primeiro;
            primeiro = a[i];
        } else if (a[i] > segundo && a[i] != primeiro) {
            segundo = a[i];
        }
    }
    cout << segundo << endl;
    return 0;
}