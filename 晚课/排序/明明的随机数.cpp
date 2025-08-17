/*
    By Oscar Fan
    Date: 2024/12/4
    File: 明明的随机数.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[301] = {};
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
  int newn = unique(a, a + n) - a;
  cout << newn << '\n';
  for (int i = 0; i < newn; i++) cout << a[i] << " ";
  return 0;
}
