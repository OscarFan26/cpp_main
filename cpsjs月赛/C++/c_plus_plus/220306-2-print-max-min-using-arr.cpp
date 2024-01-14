//
// Created by Oscar Fan on 2022/3/6.
//
#include <iostream>
using namespace std;

int main(){
    int a[50] = {};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = a[0], min = a[0];
    for (int i = 1; i <= n-1; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    cout << min << " "  << max;
    return 0;
}
