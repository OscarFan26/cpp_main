/*
    By Oscar Fan
    Date: 2024/11/27
    File: 高精度精确值.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int a[1001], b[1001], r[1001];
int la, lb, lr, ls;

bool judge(int a[], int b[], int len) {
  if (a[len] > 0) return true;
  for (int i = len - 1; i >= 0; i--)
    if (a[i] > b[i]) return true;
    else if (a[i] < b[i])
      return false;
  return true;
}

void moddiv() {
  for (int i = la - lb; i >= 0; i--) {
    while (judge(a + i, b, lb)) {
      r[i]++;
      for (int j = 0; j <= lb - 1; j++) {
        if (a[i + j] < b[j]) {
          a[i + j + 1]--;
          a[i + j] += 10;
        }
        a[i + j] -= b[j];
      }
    }
  }
  while (a[la] == 0 && la > 0) la--;
  while (r[lr] == 0 && lr > 0) lr--;
  while (r[ls] == 0) ls++;
}

int main() {
  freopen("ab.in", "r", stdin);
  freopen("ab.out", "w", stdout);
  string sa, sb;
  cin >> sa >> sb;
  la = sa.length();
  lb = sb.length();
  lr = la - lb + 1;
  for (int i = 0; i < la; i++) a[i] = sa[la - i - 1] - '0';
  for (int i = 0; i < lb; i++) b[i] = sb[lb - i - 1] - '0';
  moddiv();
  for (int i = lr; i >= 0; i--) cout << r[i];
  if (lr < 0) cout << 0;
  cout << '.';
  if (la <= 1 && a[0] <= 0) {
    for (int i = 0; i < 20; i++) cout << 0;
    return 0;
  }
  la += 22;
  lr             = la - lb;
  int newa[1001] = {};
  for (int i = 0; i < la; i++) newa[i] = a[la - i - 1];
  for (int i = 0; i < la; i++) a[i] = newa[i];
  memset(r, 0, sizeof r);
  moddiv();
  for (int i = lr; i >= ls; i--) cout << r[i];
  fclose(stdin);
  fclose(stdout);
  return 0;
}
