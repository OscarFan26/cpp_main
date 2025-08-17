/*
    By Oscar Fan
    Date: 2024/11/29
    File: 天使的起誓.cpp
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

bool comparex(int x[], int y[]) {
  if (la < lb) return true;
  else if (la > lb)
    return false;
  for (int i = lb; i >= 0; i--)
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
}

int main() {
  freopen("YUBIKILI.IN", "r", stdin);
  freopen("YUBIKILI.OUT", "w", stdout);
  cin >> sb >> sa;
  if (compare(sa, sb)) {
    cout << sb;
    return 0;
  } else if (sa == sb) {
    cout << sb;
    return 0;
  }
  la = sa.length();
  lb = sb.length();
  for (int i = 0; i < la; i++) a[la - i - 1] = sa[i] - '0';
  for (int i = 0; i < lb; i++) b[lb - i - 1] = sb[i] - '0';
  while (!comparex(a, b)) {
    memset(r, 0, sizeof r);
    subtract();
    for (int i = 0; i < 10090; i++) a[i] = r[i];
    lr++;
    la = lr;
  }
  for (int i = --lr; i >= 0; i--) cout << r[i];
  fclose(stdin);
  fclose(stdout);
  return 0;
}
