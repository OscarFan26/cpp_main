/*
    By Oscar Fan
    Date: 2025/3/9
    File: tower.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("tower.in", "r", stdin);
  freopen("tower.out", "w", stdout);
  int n;
  int a[101][101] = {};
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < i + 1; j++) cin >> a[i][j];
  for (int i = n - 2; i >= 0; i--)
    for (int j = 0; j < i + 1; j++) a[i][j] = max(a[i][j] + a[i + 1][j], a[i][j] + a[i + 1][j + 1]);
  cout << a[0][0];
  fclose(stdin);
  fclose(stdout);
  return 0;
}
