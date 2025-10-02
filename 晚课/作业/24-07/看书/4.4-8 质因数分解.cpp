/*
    By Oscar Fan
    Date: 2024/7/1
    File: 4.4-8 质因数分解.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  if (n == 1) std::cout << 1;
  else
    for (int i = 2; i < sqrt(n); i++) {
      if (n % i == 0) {
        std::cout << n / i;
        break;
      }
    }
  return 0;
}
