/*
    By Oscar Fan
    Date: 2025/5/23
    File: stick.cpp
*/
#include <bits/stdc++.h>
using namespace std;

struct thing {
  int l, w;
} t[5005];

bool cmp(thing &a, thing &b) {
  if (a.l == b.l) return a.w > b.w;
  return a.l > b.l;
}

bool used[5005];

int main() {
  freopen("stick.in", "r", stdin);
  freopen("stick.out", "w", stdout);
  int n, sum = 0, pre;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> t[i].l >> t[i].w;
  sort(t + 1, t + n + 1, cmp);
  for (int i = 1; i <= n; i++) {
    if (used[i]) continue;
    pre = t[i].w;
    for (int j = i + 1; j <= n; j++) {
      if (t[j].w <= pre && !used[j]) {
        used[j] = true;
        pre     = t[j].w;
      }
    }
  }
  for (int i = 1; i <= n; i++)
    if (!used[i]) sum++;
  cout << sum;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
