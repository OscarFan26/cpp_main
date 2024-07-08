/*
    By Oscar Fan
    Date: 2024/6/22
    File: replace.cpp
*/
#include <bits/stdc++.h>

int main() {
  std::freopen("replace.in", "r", stdin);
  std::freopen("replace.out", "w", stdout);
  long long n;
  std::cin >> n;
  for (long long i = 2; i <= std::sqrt(n); i++) {
    if (n % i == 0 && (n + 2) % i != 0) {
      std::cout << i;
      break;
    }
  }
  std::fclose(stdin);
  std::fclose(stdout);
  return 0;
}
