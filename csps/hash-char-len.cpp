#include <bits/stdc++.h>
using namespace std;

long long B = 29;
char      s[10001];
long long a[10001];

long long hashup(char s[]) {
    int       len = strlen(s);
    long long sum = 0;
    for (int i = 0; i < len; i++) sum = sum * B + s[i];
    return sum;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        a[i] = hashup(s);
        // cout << a[i] << endl;
    }
    int  x    = a[0];
    bool flag = true;
    for (int i = 0; i < n; i++)
        if (a[i] != x) flag = false;
    if (flag) {
        cout << 1 << endl;
        return 0;
    }
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
        if (a[i] != a[i + 1]) ans++;
    if (a[n - 2] != a[n - 1]) ans++;

    cout << ans;
}
