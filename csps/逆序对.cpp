// Created By OscarFan
// TIME:  2023/5/2 10:58:58
// NAME:  逆序数.cpp

#include <bits/stdc++.h>

using namespace std;

int n, a[100001], c[100001], ans;

inline int lowbit(int x) { return x & (-x); }

void update(int x) {
    for (; x <= n; x += lowbit(x)) c[x]++;
}

int fun(int x) {
    int ans = 0;
    while (x > 0) {
        ans += c[x];
        x = x - lowbit(x);
    }
    return ans;
}

int main() {
    cin >> n;
    int arr[100001] = {};
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = n; i >= 1; i--) {
        int x = a[i];
        update(x);
        a[i] = fun(x - 1);
    }
    for (int i = 1; i <= n; i++) cout << a[i] << " ";
    return 0;
}