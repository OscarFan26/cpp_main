/*
    By Oscar Fan
    Date: 2024/12/4
    File: 军事机密.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("secret.in", "r", stdin);
  freopen("secret.out", "w", stdout);
  int n;
  cin >> n;
  int a[30001] = {};
  for (int i = 0; i < n; i++) cin >> a[i];
  int lastswap = 0, k = n - 1;
  for (int i = 0; i < n; i++) {
    bool changed = false;
    for (int j = 0; j < k; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        changed  = true;
        lastswap = j;
      }
    }
    if (!changed) break;
    k = lastswap;
  }
  int x;
  cin >> x;
  for (int i = 0; i < x; i++) {
    int t;
    cin >> t;
    cout << a[t-1] << '\n';
  }
  fclose(stdin);
  fclose(stdout);
  return 0;
}
