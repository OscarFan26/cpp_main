/*
    By Oscar Fan
    Date: 2024/7/1
    File: 2.6-10 苹果和虫子.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n, x, y;
  std::cin >> n >> x >> y;
  int remaining = n - std::ceil((double)y / x);
  std::cout << (remaining > 0 ? remaining : 0);
  return 0;
}
