/*
    By Oscar Fan
    Date: 2024/11/21
    File: 高精度乘法.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int a[2001], b[2001], r[4002];
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

void multiply() {
  int x = 0;
  for (int i = 0; i < lb; i++) {
    for (int j = 0; j < la || x != 0; j++) {
      r[i + j] += a[j] * b[i] + x;
      x = r[i + j] / 10;
      r[i + j] %= 10;
    }
  }

  lr = la + lb + 1;
  while (r[lr] == 0 && lr != 0) lr--;
  for (int i = lr; i >= 0; i--) cout << r[i];
}

int main() {
  freopen("MULTIPLY.IN", "r", stdin);
  freopen("MULTIPLY.OUT", "w", stdout);
  cin >> sa >> sb;
  if (compare(sa, sb)) swap(sa, sb);
  la = sa.length();
  lb = sb.length();
  for (int i = 0; i < la; i++) a[la - i - 1] = sa[i] - '0';
  for (int i = 0; i < lb; i++) b[lb - i - 1] = sb[i] - '0';
  multiply();
  fclose(stdin);
  fclose(stdout);
  return 0;
}
