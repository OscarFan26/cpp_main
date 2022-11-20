//
// Created by Oscar Fan on 2022/3/6.
//
#include <iostream>
using namespace std;
int main() {
    int n, i;
    int a[31] = {};
    cin >> n;
    for (i = 1; i <= n; i++) { a[i] = 1; }
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            a[i] = 1 - a[i];
        }
        if (i % 3 == 0) {
            a[i] = 1 - a[i];
        }
        if (i % 4 == 0) {
            a[i] = 1 - a[i];
        }
        if (i % 5 == 0) {
            a[i] = 1 - a[i];
        }
    }
    for (i = 1; i <= n; i++) {
        if (a[i] == 1) {
            cout << i << " ";
        }
    }
    return 0;
}