#include <bits/stdc++.h>
using namespace std;

int a[10001] = {1}, s[10001];
int la, lb;

void multiply(int n) {
  int x = 0;
  for (int i = 0; i < la || x != 0; i++) {
    a[i] = a[i] * n + x;
    x    = a[i] / 10;
    a[i] %= 10;
  }
  while (a[la] == 0 && la != 0) la--;
  la++;
}

void modadd() {
  int ins = 0;
  for (int i = 0; i < max(la, lb); i++) {
    int res = s[i] + a[i] + ins;
    ins     = res / 10;
    res %= 10;
    s[i] = res;
  }
  if (ins) s[max(la, lb)] = 1, lb = max(la, lb) + 1;
  else
    lb = max(la, lb);
}

int main() {
  freopen("sum.in", "r", stdin);
  freopen("sum.out", "w", stdout);
  int x;
  cin >> x;
  for (int n = x; n > 0; n--) {
    memset(a, 0, sizeof a);
    string sn = to_string(n);
    for (int i = 0; i < sn.length(); i++) a[i] = sn[sn.length() - i - 1] - '0';
    la = sn.length();
    for (int i = n - 1; i > 0; i--) multiply(i);
    modadd();
  }
  for (int i = --lb; i >= 0; i--) cout << s[i];
  fclose(stdin);
  fclose(stdout);
  return 0;
}
