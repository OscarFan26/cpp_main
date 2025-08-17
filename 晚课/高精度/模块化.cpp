/*
    By Oscar Fan
    Date: 2024/11/27
    File: 模块化.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int r[20002] = {}; /* should be r[la+lb+1] */
int la, lb, lr;
int *modadd(int a[], int b[]) {
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
  return a;
}

int *modsub(int a[], int b[]) {
  // must ensure a >= b
  int x = 0;
  for (int i = 0; i < la; i++) {
    x = a[i] - b[i];
    if (x < 0) {
      x += 10;
      a[i + 1]--;
    }
    a[i] = x;
  }
  while (a[la] == 0) la--;
  return a;
}

int *modmul(int a[], int b[]) {
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
  return r;
}

bool judge(int a[], int b[], int len) {
  if (a[len] > 0) return true;
  for (int i = len - 1; i >= 0; i--)
    if (a[i] > b[i]) return true;
    else if (a[i] < b[i])
      return false;
  return true;
}

int *moddiv(int a[], int b[]) {
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
  return r;
}

int main() { return 0; }
