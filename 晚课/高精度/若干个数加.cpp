/*
    By Oscar Fan
    Date: 2024/11/13
    File: 若干个数加.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int a[201], b[201];
int la = 1, lb = 1;

void add() {
  int ins = 0;
  for (int i = 0; i < max(la, lb); i++) {
    int res = a[i] + b[i] + ins;
    ins     = res / 10;
    res %= 10;
    a[i] = res;
  }
  if (ins) a[max(la, lb)] = 1, la = max(la, lb) + 1;
  else
    la = max(la, lb);
}

int main() {
  freopen("sum2.in", "r", stdin);
  freopen("sum2.out", "w", stdout);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int x = s.length() - 1; x >= 0; x--) b[s.length() - x - 1] = s[x] - '0';
    lb = s.length();
    add();
  }
  for (int i = la - 1; i >= 0; i--) cout << a[i];
  fclose(stdin);
  fclose(stdout);
  return 0;
}
