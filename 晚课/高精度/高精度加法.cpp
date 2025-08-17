#include <bits/stdc++.h>
using namespace std;

int a[10000], b[10000], r[10000];
string sa, sb;

void add() {
  int ins = 0;
  int pos = 0;
  int la = sa.length(), lb = sb.length();
  for (int i = 0; i < max(la, lb); i++) {
    int res = a[i] + b[i] + ins;
    ins     = res / 10;
    res %= 10;
    r[i] = res;
  }
  if (ins) cout << 1;
  for (int i = max(la, lb) - 1; i >= 0; i--) cout << r[i];
}

int main() {
  cin >> sa >> sb;
  for (int i = 0; i < sa.length(); i++) a[i] = sa[sa.length() - i - 1] - '0';
  for (int i = 0; i < sb.length(); i++) b[i] = sb[sb.length() - i - 1] - '0';
  add();
  return 0;
}
