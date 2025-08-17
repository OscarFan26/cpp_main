/*
    By Oscar Fan
    Date: 2025/3/9
    File: Acme.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("Acme.in", "r", stdin);
  freopen("Acme.out", "w", stdout);
  int k;
  cin >> k;
  int a = 0, b = 1, c = 1;
  while (c <= k) {
    a = b;
    b = c;
    c = a + b;
  }
  printf("m=%d\nn=%d", a, b);
  fclose(stdin);
  fclose(stdout);
  return 0;
}
