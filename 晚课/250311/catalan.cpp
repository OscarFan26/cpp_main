/*
    By Oscar Fan
    Date: 2025/3/14
    File: catalan.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("catalan.in", "r", stdin);
  freopen("catalan.out", "w", stdout);
  int n;
  cin >> n;
  int h[1001] = {};
  h[2]        = 1;
  for (int i = 3; i <= n + 2; i++) {
    int sum = 0;
    for (int j = 2; j < i; j++) sum += h[j] * h[i - j + 1];
    h[i] = sum;
  }
  cout << h[n + 2];
  fclose(stdin);
  fclose(stdout);
  return 0;
}
