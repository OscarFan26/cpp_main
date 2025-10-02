/*
    By Oscar Fan
    Date: 2025/10/1
    File: 3374树状数组模板.cpp
*/
#include <bits/stdc++.h>
using namespace std;

class BinaryIndexTree {
  int n;
  vector<int> a;
  vector<int> c;


  void build() {
    c.reserve(n + 1);
    for (int i = 1; i <= n; i++) {
      c[i] += a[i];
      int j = i + lowbit(i);
      if (j <= n) c[j] += c[i];
    }
  }

public:
  BinaryIndexTree(int pn, vector<int> arr) {
    n = pn;
    a = arr;
    build();
  }
  void putC() {
    for (auto i: c) cout << i << " ";
  }
  int getsum(int x) {
    int ans = 0;
    while (x > 0) {
      ans += c[x];
      x -= lowbit(x);
    }
    return ans;
  }
  int query(int l, int r) {
    if (l == 0) return getsum(r);
    return getsum(r) - getsum(l - 1);
  }
  int lowbit(int x) { return x & -x; }
  void update(int p, int x) {
    while (p <= n) {
      c[p] += x;
      p += lowbit(p);
    }
  }
};

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> arr(n + 1);
  for (int i = 1; i <= n; i++) cin >> arr[i];
  BinaryIndexTree bit(n + 1, arr);
  for (int i = 0; i < m; i++) {
    short ops;
    cin >> ops;
    if (ops == 1) {
      int x, k;
      cin >> x >> k;
      bit.update(x, k);
    } else {
      int x, y;
      cin >> x >> y;
      cout << bit.query(x, y) << '\n';
    }
  }
  return 0;
}
