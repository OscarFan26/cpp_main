/*
    By Oscar Fan
    Date: 2024/11/13
    File: 累加.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int x[20001], sum[20001], n[20001];
int len, ln;
int lx = 1;

void add() {
  int ins = 0;
  int m   = max(lx, len);
  for (int i = 0; i < m; i++) {
    int res = x[i] + sum[i] + ins;
    ins     = res / 10;
    res %= 10;
    sum[i] = res;
  }
  if (ins) sum[m] = 1, len = ++m;
  else
    len = m;
}

bool is() {
  if (lx != ln) return false;
  for (int i = 0; i < ln; i++)
    if (x[i] != n[i]) return false;
  return true;
}

void accumulate_x() {
  while (!is()) {
    x[0]++;
    if (x[0] == 10) {
      x[0] = 0;
      for (int u = 1; u <= lx; u++) {
        x[u]++;
        if (x[u] == 10) x[u] = 0;
        else
          break;
      }
      if (x[lx]) lx++;
    }
    add();
  }
  for (int i = len - 1; i >= 0; i--) cout << sum[i];
}

int main() {
  /*
   * n <= 10^20, 太大了运行时间长的离谱，不知道怎么优化，把我看到的坑都避了，能跑
   * 10^9 大概需要 90s.
   * */
  freopen("sum.in", "r", stdin);
  freopen("sum.out", "w", stdout);
  string x;
  cin >> x;
  for (int i = x.length() - 1; i >= 0; i--) n[x.length() - i - 1] = x[i] - '0';
  ln = x.length();
  accumulate_x();
  fclose(stdin);
  fclose(stdout);
  return 0;
}