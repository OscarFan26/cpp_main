/*
    By Oscar Fan
    Date: 2024/1/6
    File: 4.5.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n = 0, s = 0;
  while (s <= 1000) {
    n++;
    s += n;
  }
  std::cout << n;
  return 0;
}
