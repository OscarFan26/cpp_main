#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

const int maxn = 100001;
char      s[maxn];
ull       h[maxn];
ull       B = 131;
ull       k[maxn];

int main() {
    k[0] = 1;
    for (int i = 1; i < maxn; i++) k[i] = k[i - 1] * B;
    cin >> s;
    int len = strlen(s);
    int n   = 0;
    for (int i = 1; i <= len; i++) h[i] = h[i - 1] * B + s[i - 1];
    for (int i = 1; i <= len; i++) {
        if (len % i != 0) continue;
        ull  temp = h[i];
        bool f    = true;
        for (int j = i; j <= len; j += i)
            if (h[j] - h[j - i] * k[i] != temp) {
                f = false;
                break;
            }
        if (f) {
            n = len / i;
            break;
        }
    }
    cout << n << endl;
    return 0;
}
