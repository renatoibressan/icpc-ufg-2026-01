#include <iostream>
#define N 200000
using namespace std;

long long maxArraySum(long long arr[], int n);

int main() {
    int t, n, i, j;
    long long a[N], sum;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n;
        for (j = 0; j < n; j++) {
            cin >> a[j];
        }
        sum = maxArraySum(a, n);
        cout << sum << endl;
    }
    return 0;
}

long long maxArraySum(long long arr[], int n) {
    long long sum = 0, minumum = __LONG_LONG_MAX__;
    int i, negatives = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            negatives++;
            arr[i] *= -1;
        }
        sum += arr[i];
        if (arr[i] < minumum) {
            minumum = arr[i];
        } 
    }
    if (negatives % 2 == 0) {
        return sum;
    } else {
        return sum - (2 * minumum);
    }
}