/*
By Oscar Fan
Date: 2025/4/24
File: load.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int n, c;
int s[101];
int ans = -10000;
int pans;
bool used[101];
int pre;

void search(int x) {
  if (x == pre) {
    if (pans == c) {
      cout << c;
      exit(0);
    }
    if (pans > c) return;
    if (c - pans < c - ans) ans = pans;
  }
  for (int i = 0; i < n; i++) {
    if (used[i] || pans + s[i] > c) continue;
    used[i] = true;
    pans += s[i];
    search(x + 1);
    pans -= s[i];
    used[i] = false;
  }
}

int main() {
  freopen("load.in", "r", stdin);
  freopen("load.out", "w", stdout);
  cin >> n >> c;
  for (int i = 0; i < n; i++) cin >> s[i];
  for (pre = 1; pre <= n; pre++)
    search(0);
  cout << ans;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
