#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> c(n), q(n);
  for (int i = 1; i <= n; i++) cin >> c[i];
  for (int i = 1; i <= n; i++) cin >> q[i];
  for (int i = 0; i < q; i++) {
    short ins;
    cin >> ins;
    if (ins == 1) {
      int p, x;
      cin >> p >> x;
      c[p] = x;
    } else if (ins == 2) {
      int p, x;
      cin >> p >> x;
      v[p] = x;
    }
  }

  return 0;
}
