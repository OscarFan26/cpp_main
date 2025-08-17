/*
    By Oscar Fan
    Date: 2025/5/8
    File: 6.1.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int n, r;
int t[101];
int wait[101];
int ans;

int main() {
  cin >> n >> r;
  for (int i = 0; i < n; i++) cin >> t[i];
  sort(t, t+n);
  int pre = -1;
  for (int i = 0; i < n; i++) {
    pre++;
    if (pre == r) pre = 0;
    wait[pre] += t[i];
    ans += wait[pre];
  }
  cout << ans;
  return 0;
}
