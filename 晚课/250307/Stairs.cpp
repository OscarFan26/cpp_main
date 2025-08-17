/*
    By Oscar Fan
    Date: 2025/3/7
    File: Stairs.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("Stairs.in", "r", stdin);
  freopen("Stairs.out", "w", stdout);
  int n;
  cin >> n;
  int a[1001] = {1, 1};
  for (int i = 2; i <= n; i++) a[i] = a[i - 1] + a[i - 2];
  cout << a[n];
  fclose(stdin);
  fclose(stdout);
  return 0;
}
