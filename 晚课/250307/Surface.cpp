/*
    By Oscar Fan
    Date: 2025/3/7
    File: Surface.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("Surface.in", "r", stdin);
  freopen("Surface.out", "w", stdout);
  int n, p;
  cin >> n >> p;
  int a[5001] = {};
  a[p] = 2*p;
  for (int i = p+1; i <= n; i++) a[i] = a[i - 1] + i;
  cout << a[n];
  fclose(stdin);
  fclose(stdout);
  return 0;
}
