/*
    By Oscar Fan
    Date: 2024/1/6
    File: 1.2.5.cpp
*/
#include <bits/stdc++.h>

int main() {
  int x, a, y, b;
  std::cin >> x >> a >> y >> b;
  std::cout << std::fixed << std::setprecision(2) << (double)(x * a - y * b) / (a - b);
  return 0;
}
