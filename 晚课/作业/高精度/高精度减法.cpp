/*
    By Oscar Fan
    Date: 2024/11/21
    File: 高精度减法.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int a[10090], b[10090], r[10090];
string sa, sb;
int la, lb, lr;

bool compare(string x, string y) {
  if (x.length() < y.length()) return true;
  else if (x.length() > y.length())
    return false;
  for (int i = 0; i < x.length(); i++)
    if (x[i] < y[i]) return true;
    else if (x[i] > y[i])
      return false;
  return false;
}

void subtract() {
  int x = 0;
  for (int i = 0; i < la; i++) {
    x = a[i] - b[i];
    if (x < 0) {
      x += 10;
      a[i + 1]--;
    }
    r[i] = x;
  }
  lr = la;
  while (r[lr] == 0) lr--;
  for (int i = lr; i >= 0; i--) cout << r[i];
}

int main() {
  cin >> sa >> sb;
  if (compare(sa, sb)) {
    cout << "-";
    swap(sa, sb);
  } else if (sa == sb) {
    cout << 0;
    return 0;
  }
  la = sa.length();
  lb = sb.length();
  for (int i = 0; i < la; i++) a[la - i - 1] = sa[i] - '0';
  for (int i = 0; i < lb; i++) b[lb - i - 1] = sb[i] - '0';
  subtract();
  return 0;
}
