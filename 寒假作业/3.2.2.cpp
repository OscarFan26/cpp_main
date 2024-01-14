/*
    By Oscar Fan
    Date: 2024/1/6
    File: 3.2.2.cpp
*/
#include <bits/stdc++.h>

int main() {
  double x;
  std::cin >> x;
  std::cout << std::fixed << std::setprecision(2) << (x <= 0 ? -x : x);
  return 0;
}
