/*
    By Oscar Fan
    Date: 2024/11/29
    File: hanoi.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("hanoi.in", "r", stdin);
  freopen("hanoi.out", "w", stdout);
  string nx;
  int ans[10001] = {}, l;
  cin >> nx;
  int n = stoi(nx);
  l     = nx.length();
  for (int i = 0; i < n; i++) {
    int x = 0;
    for (int j = 0; j < l || x != 0; j++) {
      ans[j] = ans[j] * 2 + x;
      x      = ans[j] / 10;
      ans[j] %= 10;
    }
    l += 3;
    while (ans[l] == 0 && l > 0) l--;
    l++;
    ans[0] += 2;
    while (ans[x] > 9 && x < l) {
      ans[x] -= 10;
      ans[x + 1]++;
      x++;
    }
    if (ans[l] > 9) {
      ans[l] -= 10;
      ans[++l]++;
    }
  }
  for (int i = --l; i >= 0; i--) cout << ans[i];
  fclose(stdin);
  fclose(stdout);
  return 0;
}