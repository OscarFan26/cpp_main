/*
    By Oscar Fan
    File: 数字划分
    Created Date: 2023/8/7 9:29
*/
#include <bits/stdc++.h>
using namespace std;

int a[201][10];
int k;

int main() {
    int n;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) { a[i][1] = 1;
}
    for (int i = 2; i <= n; i++)
        for (int j = 2; j <= k; j++)
            if (j > i)
                a[i][j] = 0;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - j][j];

    cout << a[n][k];
    return 0;
}