/*
    By Oscar Fan
    Date: 2024/3/25
    File: 5.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n ; i++) {
    int digit4 = i / 1000, digit3 = (i / 100) % 10, digit2 = (i / 10) % 10, digit1 = i % 10;
    if (digit4 == 1) cnt++;
    if (digit3 == 1) cnt++;
    if (digit2 == 1) cnt++;
    if (digit1 == 1) cnt++;
  }
  std::cout << cnt;
  return 0;
}
