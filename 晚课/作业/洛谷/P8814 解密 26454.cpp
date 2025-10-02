#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("decode.in", "r", stdin);
  freopen("decode.out", "w", stdout);
  long long k;
  cin >> k;
  while (k--) {
    long long n, e, d;
    cin >> n >> e >> d;
    long long PsubQ = sqrt((n - e * d + 2) * (n - e * d + 2) - (n * 4));
    long long PaddQ = n - e * d + 2;
    long long P     = (PsubQ + PaddQ) / 2;
    long long Q     = PaddQ - P;
    if (P * Q == n && e * d == (P - 1) * (Q - 1) + 1 && P && Q) cout << min(P, Q) << "  " << max(P, Q) << "\n";
    else
      cout << "NO\n";
  }
  fclose(stdin);
  fclose(stdout);
  return 0;
}
