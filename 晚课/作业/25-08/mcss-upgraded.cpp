/*
    By Oscar Fan
    Date: 2025/8/22
    File: mcss-upgraded.cpp
*/
#include <bits/stdc++.h>
using namespace std;

struct node {
  int val;
  int l;
  int r;
  friend bool operator<(const node &a, const node &b) { return a.val < b.val; }
};

int main() {
  int n;
  while (true) {
    cin >> n;
    if (n == 0) break;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (find_if(a.begin(), a.end(), [](int x) { return x > 0; }) == a.end() && a[n - 1] < 0) {
      printf("%d %d %d\n", 0, a[0], a[n - 1]);
      continue;
    }
    vector<node> dp(n);
    dp[0] = {a[0], 0, 0};
    for (int i = 1; i < n; i++)
      if (dp[i - 1].val + a[i] > a[i]) {
        dp[i].val = dp[i - 1].val + a[i];
        dp[i].l   = dp[i - 1].l;
        dp[i].r   = i;
      } else {
        dp[i].val = a[i];
        dp[i].l = dp[i].r = i;
      }
    int ans = max_element(dp.begin(), dp.end()) - dp.begin();
    printf("%d %d %d\n", dp[ans].val, a[dp[ans].l], a[dp[ans].r]);
  }
  return 0;
}
