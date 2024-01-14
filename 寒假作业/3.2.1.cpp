/*
    By Oscar Fan
    Date: 2024/1/6
    File: 3.2.1.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  if (n > 0)
    std::cout << "positive";
  else if (n < 0)
    std::cout << "negative";
  else
    std::cout << "zero";
  return 0;
}
