
#include <bits/stdc++.h>
using namespace std;

int a[10003];
int w[10003];
int f[1000003];

int main() {
    int t, m;
    cin >> t >> m;
    for (int i = 1; i <= m; i++) cin >> a[i] >> w[i];
    for (int i = 1; i <= m; i++)
        for (int j = t; j >= a[i]; j--) f[j] = max(f[j], f[j - a[i] + w[i]]);
    int sum = f[t];
    cout << sum;
    return 0;
}