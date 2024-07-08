/*
    By Oscar Fan
    Date: 2024/3/25
    File: 4.cpp
*/
#include <bits/stdc++.h>

int main() {
  float x;
  int n;
  std::cin >> x >> n;
  float sum;
  for (int i = n; i >= 0; i--) {
    float seg = 1.0;
    for (int j = 0; j < i; j++) seg *= x;
    sum += seg;
  }
  std::cout << std::fixed << std::setprecision(2) << sum;
  return 0;
}
