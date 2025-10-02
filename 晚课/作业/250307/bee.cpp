/*
    By Oscar Fan
    Date: 2025/3/9
    File: bee.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("bee.in", "r", stdin);
  freopen("bee.out", "w", stdout);
  int m, nn;
  cin >> m >> nn;
  int n       = nn - m;
  int a[1001] = {1, 1};
  for (int i = 2; i <= n; i++) a[i] = a[i - 1] + a[i - 2];
  cout << a[n];
  fclose(stdin);
  fclose(stdout);
  return 0;
}