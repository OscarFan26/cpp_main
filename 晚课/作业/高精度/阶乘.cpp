/*
    By Oscar Fan
    Date: 2024/11/27
    File: 阶乘.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int a[10001] = {1};
int la;

void multiply(int n) {
  int x = 0;
  for (int i = 0; i < la || x != 0; i++) {
    a[i] = a[i] * n + x;
    x = a[i] / 10;
    a[i] %= 10;
  }
  while (a[la] == 0 && la != 0) la--;
  la++;
}

int main() {
  freopen("ni.in", "r", stdin);
  freopen("ni.out", "w", stdout);
  int n;
  cin >> n;
  string sn = to_string(n);
  for (int i = 0; i < sn.length(); i++) a[i] = sn[sn.length() - i - 1] - '0';
  la = sn.length();
  for (int i = n-1; i > 0; i--) {
    multiply(i);
  }
  for (int i = --la; i >= 0; i--) cout << a[i];
  fclose(stdin);
  fclose(stdout);
  return 0;
}
