/*
    By Oscar Fan
    Date: 2024/7/1
    File: 5.3-11 整理药名.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  std::string lst[101];
  std::cin >> n;
  for (int i = 0; i < n; i++) std::cin >> lst[i];
  for (int i = 0; i < n; i++) {
    std::string tgt = lst[i];
    tgt[0] = std::toupper(lst[i][0]);
    for (int j = 1; j < tgt.length(); j++) tgt[j] = std::tolower(tgt[j]);
    std::cout << tgt << "\n";
  }
  return 0;
}
