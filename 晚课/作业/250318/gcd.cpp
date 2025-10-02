/*
    By Oscar Fan
    Date: 2025/3/22
    File: gcd.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int gcd(int m, int n) {
  if (m % n == 0) return n;
  return gcd(n, m % n);
}

int main() {
  freopen("gcd.in", "r", stdin);
  freopen("gcd.out", "w", stdout);
  int m, n;
  cin >> m >> n;
  cout << "gcd=" << gcd(m, n);
  fclose(stdin);
  fclose(stdout);
  return 0;
}
