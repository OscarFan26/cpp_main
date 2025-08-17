/*
    By Oscar Fan
    Date: 2024/7/1
    File: P3742 umi的函数.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  std::string x, y, z;
  std::cin >> n >> x >> y;
  // f(x, z) = y
  for (int i = 0; i < n; i++) {
    if (x[i] < y[i]) { std::cout << -1; return 0; }
    if (x[i] == y[i]) z.push_back(y[i]);
    if (x[i] > y[i]) z.push_back(y[i]);
  }
  std::cout << z;
  return 0;
}
