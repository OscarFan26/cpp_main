/*
    By Oscar Fan
    Date: 2024/7/1
    File: 5.2-3 用递归的方法求Hermite多项式的值.cpp
*/
#include <bits/stdc++.h>

int hermite(int x, int n) {
  if (n == 0) return 1;
  else if (n == 1) return 2 * x;
  else {
    return 2 * x * hermite(x, n-1) - 2 * (n-1) * hermite(x, n-2);
  }
}

int main() {
  int x, n;
  std::cin >> n >> x;
  std::cout << hermite(x, n);
  return 0;
}
