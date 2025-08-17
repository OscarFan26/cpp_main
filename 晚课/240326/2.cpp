/*
    By Oscar Fan
    Date: 2024/3/25
    File: 1.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  double sum = 1;
  for (int i = 1; i <= n; i++) {
    int fact = 1;
    for (int j = 1; j <= i; j++) fact *= j;
    sum += (1.0 / fact);
  }
  std::cout << std::fixed << std::setprecision(10) << sum;
  return 0;
}
