/*
    By Oscar Fan
    Date: 2025/3/27
    File: envelope.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int envelope(int n) {
  if (n == 1) return 0;
  if (n == 2) return 1;
  return (n - 1) * (envelope(n - 1) + envelope(n - 2));
}

int main() {
  freopen("envelope.in", "r", stdin);
  freopen("envelope.out", "w", stdout);
  int n;
  cin >> n;
  cout << envelope(n);
  fclose(stdin);
  fclose(stdout);
  return 0;
}
