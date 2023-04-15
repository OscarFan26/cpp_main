/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int a, b, d[101];
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int cnt;

void dfs(int a, int b) {
    if (!b % a) d[++cnt] = b / a;
    if (a == 1) {
        for (int i = 1; i <= cnt; i++) cout << d[i] << " ";
        return;
    }
    d[++cnt] = b / a + 1;
    a        = a * d[cnt] - b;
    b        = b * d[cnt];
    int t    = gcd(a, b);
    a /= t;
    b /= t;
    dfs(a, b);
}

int main() { 
    cin >> a >>b;
    int t = gcd(a, b);
    a /= b; b /= t;
    if (a == 1) {
        cout << b << endl;
        return 0;
    } else
        dfs(a, b);
    return 0;
}
