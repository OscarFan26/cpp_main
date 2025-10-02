/*
    By Oscar Fan
    Date: 2025/3/22
    File: change.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void change(int n) {
  if (n / 8 != 0) change(n / 8);
  cout << n % 8;
}

int main() {
  freopen("change.in", "r", stdin);
  freopen("change.out", "w", stdout);
  int n;
  cin >> n;
  change(n);
  fclose(stdin);
  fclose(stdout);
  return 0;
}
