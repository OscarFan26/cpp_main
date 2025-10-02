/*
    By Oscar Fan
    Date: 2024/11/13
    File: 斐波那契.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int a[10000], b[10000], r[10000];
int len;
int la = 1, lb = 1;

void add() {
  int ins = 0;
  for (int i = 0; i < max(la, lb); i++) {
    int res = a[i] + b[i] + ins;
    ins     = res / 10;
    res %= 10;
    r[i] = res;
  }
  if (ins) r[max(la, lb)] = 1, len = max(la, lb) + 1;
  else
    len = max(la, lb);
}

void fibo(int n) {
  if (n <= 2) {
    cout << 1;
    return;
  }
  for (int i = 3; i <= n; i++) {
    if (i != 3) {
      copy(b, b + 10000, a);
      copy(r, r + 10000, b);
      la = lb, lb = len;
      memset(r, 0, sizeof(r));
    }
    add();
  }
  for (int i = 0; i < len; i++) cout << r[i];
}

int main() {
  freopen("Fibonacci.in", "r", stdin);
  freopen("Fibonacci.out", "w", stdout);
  int n;
  cin >> n;
  a[0] = 1;
  b[0] = 1;
  fibo(n);
  fclose(stdin);
  fclose(stdout);
  return 0;
}
