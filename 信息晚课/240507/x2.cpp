/*
    By Oscar Fan
    Date: 2024/5/12
    File: x2.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n = 0;
  std::cin >> n;
  int fibo[100001] = {0, 1};
  if (n == 1) std::cout << "0";
  else if (n == 2)
    std::cout << "0 1";
  else
    for (int i = 3; i <= n; ++i) fibo[i - 1] = fibo[i - 2] + fibo[i - 3];
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    std::cout << fibo[i];
    cnt++;
    if (!(cnt % 5)) std::cout << "\n";
    else
      std::cout << " ";
  }
  return 0;
}
