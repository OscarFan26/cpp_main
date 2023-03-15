#include <bits/stdc++.h>
using namespace std;

int main() {
    long long b, p, k, ans = 1;
    cin >> b >> p >> k;
    while (p) {
      if (p & 1) ans = ans * b % k;
      b = b * b % k;
      p >>= 1;
    }
    cout << b << " ^ " << p << "mod " << k << "= " << ans;
    return 0;
}
