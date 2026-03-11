#include <iostream>
using namespace std;

int main() {
    string username;
    int i, j, count = 0;
    bool flag;
    cin >> username;
    for (i = 0; username[i] != '\0'; i++) {
        flag = false;
        for (j = 0; j < i; j++) {
            if (username[j] == username[i]) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            count++;
        }
    }
    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}