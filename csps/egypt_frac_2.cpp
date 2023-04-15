/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll   a, b, depth, temp[101], ans[101];
bool flag;
ll   gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

void dfs(ll newa, ll newb, ll step) {
    if (step + 1 == depth) {
        if (newa == 1) {
            temp[step + 1] = newb;
            flag           = 1;
            // for (int i = 1; i <= depth; i++) cout << temp[i] << " ";
            // cout << endl;
            if (temp[step + 1] < ans[step + 1] || ans[step + 1] == 0) memcpy(ans, temp, sizeof(temp));
        }
        return;
    }
    ll first = (newb % newa == 0 ? newb / newa : newb / newa + 1);
    for (ll i = max(first, temp[step] + 1); i <= ceil(newb / newa) * (depth - step); i++) {
        temp[step + 1] = i;
        ll nexta       = newa * i - newb;
        ll nextb       = newb * i;
        ll g           = gcd(nexta, nextb);
        dfs(ll(nexta / g), ll(nextb / g), step + 1);
    }
}

int main() {
    cin >> a >> b;
    ll g    = gcd(a, b);
    temp[0] = 1;
    for (depth = 1; true; depth++) {
        dfs(ll(a / g), ll(b / g), 0);
        if (flag) break;
    }
    for (int i = 1; i <= depth; i++) cout << ans[i] << " ";
    return 0;
}
