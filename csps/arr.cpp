#include <bits/stdc++.h>
using namespace std;

const int inf = 300;
int n, a[20][20], b[20][20];
int check(int s ) {
    memset(b, 0, sizeof(b));
    for (int i = n - 1; i >= 0; i--) {
        if (s & 1) b[0][i] = 1;
        else {
            if (a[0][i] == 1)
                return inf;
        }     s = s >> 1;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            if (i > 1)
                sum += b[i - 2][j];
            if ( j > 0)
                sum += b[i - 1][j - 1];
            if (j<n-1)
                sum += b[i - 1][j + 1];
            b[i][j] = sum % 2;
            if (a[i][j] == 1 && b[i][j] == 0 ) return inf;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i ++)
        for (int j = 0; j < n; j++)
            if (a[i][j] != b[i][j])
                cnt++;
    return cnt;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int anss = inf;
    for (int i = 0; i < (1 << n); i++)
        anss = min(anss, check(i));
    if (anss == inf)
        cout << -1;
        else
        cout << anss;
        return 0;
}
