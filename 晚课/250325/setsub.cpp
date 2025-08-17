/*
    By Oscar Fan
    Date: 2025/3/28
    File: setsub.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int stirling(int a, int b) {
  if (b <= 0 || a <= 0 || a < b) return 0;
  if (b == 1 || b == a) return 1;
  return stirling(a - 1, b - 1) + stirling(a - 1, b) * b;
}

int main() {
  freopen("setsub.in", "r", stdin);
  freopen("setsub.out", "w", stdout);
  int n;
  cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++) sum += stirling(n, i);
  cout << sum;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
