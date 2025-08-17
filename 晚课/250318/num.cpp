/*
    By Oscar Fan
    Date: 2025/3/22
    File: num.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int num(int n, int l) {
  if (n < 10) return n;
  return n % 10 * pow(10, l - 1) + num(n / 10, l - 1);
}

int main() {
  freopen("num.in", "r", stdin);
  freopen("num.out", "w", stdout);
  int n;
  cin >> n;
  cout << num(n, to_string(n).length());
  fclose(stdin);
  fclose(stdout);
  return 0;
}
