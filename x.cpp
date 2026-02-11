#include <iostream>
#include <vector>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<char> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    int ans = 0;
    while (x.size() > 1) {
      bool moved = false;
      for (int i = 0; i < x.size() - 1; i++) {
        if (i + 2 < x.size() && x[i] == '5' && x[i + 1] == '2' && x[i + 2] == '0') {
          ans++;
          moved = true;
          x.erase(x.begin() + i, x.begin() + i + 2);
        }
        if (c > 0 && x[i] == '5' && x[i + 1] == '2') {
          c--;
          ans++;
          moved = true;
          x.erase(x.begin() + i, x.begin() + i + 1);
        }
        if (b > 0 && x[i] == '5' && x[i + 1] == '0') {
          b--;
          ans++;
          moved = true;
          x.erase(x.begin() + i, x.begin() + i + 1);
        }
        if (a > 0 && x[i] == '2' && x[i + 1] == '0') {
          a--;
          ans++;
          moved = true;
          x.erase(x.begin() + i, x.begin() + i + 1);
        }
      }
      if (!moved) break;
    }
    for (int i = 0; i < x.size(); i++) {
      if (i + 2 < x.size() && x[i] == '5' && x[i + 1] == '2' && x[i + 2] == '0') {
        ans++;
        x.erase(x.begin() + i, x.begin() + i + 2);
      }
      if (x[i] == '5' && b > 0 && c > 0) {
        ans++;
        b--;
        c--;
      } else if (x[i] == '2' && a > 0 && c > 0) {
        ans++;
        a--;
        c--;
      } else if (x[i] == '0' && b > 0 && a > 0) {
        ans++;
        b--;
        a--;
      }
    }
    ans += min(a, min(b, c));
    cout << ans << '\n';
  }
}
