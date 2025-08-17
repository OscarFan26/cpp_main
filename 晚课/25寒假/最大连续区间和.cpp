/*
    By Oscar Fan
    Date: 2024/12/21
    File: 最大连续区间和.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int a[10001], dp[10001];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  dp[0] = 0;
  for (int i = 1; i <= n; i++) dp[i] = max(a[i], a[i-1] + a[i]);
  int maxn = 0;
  for (int i = 1; i <= n; i++) maxn = max(maxn, dp[i]);
  cout << maxn;
  return 0;
}
