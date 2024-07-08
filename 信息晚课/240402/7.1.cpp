/*
    By Oscar Fan
    Date: 2024/4/4
    File: 7.1.cpp
*/
#include <bits/stdc++.h>

int main() {
  std::freopen("in.txt", "r", stdin);
  std::freopen("out.txt", "w", stdout);
  int x, sum = 0;
  while (std::cin >> x) {
    sum += x;
  }
  std::cout << sum << "\n";
  std::fclose(stdin);
  std::fclose(stdout);
  return 0;
}
