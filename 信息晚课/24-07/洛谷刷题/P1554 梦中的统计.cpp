/*
    By Oscar Fan
    Date: 2024/7/3
    File: P1554 梦中的统计.cpp
*/
#include <bits/stdc++.h>

int main() {
  int m, n, arr[10];
  std::cin >> m >> n;
  for (int i = m; i <= n; i++) {
    std::string num = std::to_string(i);
    for (auto x : num) arr[x - '0']++;
  }
  for (auto i : arr) std::cout << i << " ";
  return 0;
}
