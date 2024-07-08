/*
    By Oscar Fan
    Date: 2024/3/25
    File: 1.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int fact = 1;
    for (int j = 1; j <= i; j++) fact *= j;
    sum += fact;
  }
  std::cout << sum;
  return 0;
}
