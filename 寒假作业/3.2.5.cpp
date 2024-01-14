/*
    By Oscar Fan
    Date: 2024/1/6
    File: 3.2.5.cpp
*/
#include <bits/stdc++.h>

int main() {
  int x, y;
  std::cin >> x >> y;
  if (x > y)
    std::cout << ">";
  else if (x < y)
    std::cout << "<";
  else
    std::cout << "=";
  return 0;
}
