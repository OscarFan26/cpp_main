/*
    By Oscar Fan
    Date: 2025/5/16
    File: group.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("group.in", "r", stdin);
  freopen("group.out", "w", stdout);
  int w, n;
  cin >> w >> n;
  int prices[30001] = {};
  for (int i = 0; i < n; i++) cin >> prices[i];
  sort(prices, prices + n);
  int k = 0, l = 0, r = n - 1;
  while (l <= r) {
    if (prices[l] + prices[r] <= w) {
      l++;
      r--;
      k++;
    } else {
      r--;
      k++;
    }
  }
  cout << k;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
