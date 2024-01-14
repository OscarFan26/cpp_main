/*
    By Oscar Fan
    Date: 2024/1/6
    File: 4.4.cpp
*/
#include <bits/stdc++.h>

int main() {
  using ll = long long;
  ll retval = 1;
  int n;
  std::cin >> n;
  for (int i = 1; i <= n; i++)
    retval *= i;
  std::cout << retval;
  return 0;
}
