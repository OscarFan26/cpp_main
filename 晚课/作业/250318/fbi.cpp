/*
    By Oscar Fan
    Date: 2025/3/22
    File: fbi.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int fbi(int n) {
  if (n == 2 || n == 3) return 1;
  return fbi(n - 1) + fbi(n - 2);
}

int main() {
  freopen("fbi.in", "r", stdin);
  freopen("fbi.out", "w", stdout);
  int n;
  cin >> n;
  if (n == 1) {
    cout << 0;
    return 0;
  }
  cout << fbi(n);
  fclose(stdin);
  fclose(stdout);
  return 0;
}
