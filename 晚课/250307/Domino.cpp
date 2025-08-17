/*
    By Oscar Fan
    Date: 2025/3/7
    File: Domino.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
//  freopen("Domino.in", "r", stdin);
//  freopen("Domino.out", "w", stdout);
  int n;
  cin >> n;
  int a[1001] = {1, 2, 4};
  for (int i = 3; i < n; i++) a[i] = a[i - 1] + a[i - 2] + a[i - 3];
  cout << a[n - 1];
//  fclose(stdin);
//  fclose(stdout);
  return 0;
}
