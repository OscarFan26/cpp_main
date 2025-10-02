/*
    By Oscar Fan
    Date: 2025/5/22
    File: fruit.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("fruit.in", "r", stdin);
  freopen("fruit.out", "w", stdout);
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  int ans = 0;
  while (a.size() > 1) {
    sort(a.begin(), a.end());
    ans += (a[0] + a[1]);
    a[1] = a[0] + a[1];
    a.erase(a.begin(), a.begin() + 1);
  }
  cout << ans;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
