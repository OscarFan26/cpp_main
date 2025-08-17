/*
    By Oscar Fan
    Date: 2024/7/1
    File: P2955 [USACO09OCT] Even Odd G.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::string x;
    std::cin >> x;
    std::cout << (int(x[x.length()-1]) % 2 == 0 ? "even" : "odd") << "\n";
  }
  return 0;
}
