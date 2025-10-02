/*
    By Oscar Fan
    Date: 2024/3/25
    File: 4.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  int sum = 0;
  for (int each = 1; each <= n; ++each) {
    int digit1 = each / 10, digit2 = each % 10;
    if (digit1 != 7 && digit2 != 7 && each % 7) sum += each * each;
  }
  std::cout << sum;
  return 0;
}
