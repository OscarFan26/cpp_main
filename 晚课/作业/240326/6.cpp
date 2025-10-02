/*
    By Oscar Fan
    Date: 2024/3/25
    File: 6.cpp
*/
#include <bits/stdc++.h>

int main() {
  int lrange, rrange;
  std::cin >> lrange >> rrange;
  int cnt = 0;
  for (int i = lrange; i <= rrange ; i++) {
    int digit4 = i / 1000, digit3 = (i / 100) % 10, digit2 = (i / 10) % 10, digit1 = i % 10;
    if (digit4 == 2) cnt++;
    if (digit3 == 2) cnt++;
    if (digit2 == 2) cnt++;
    if (digit1 == 2) cnt++;
  }
  std::cout << cnt;
  return 0;
}
