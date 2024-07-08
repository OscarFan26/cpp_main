/*
    By Oscar Fan
    Date: 2024/7/5
    File: P1427 小鱼的数字游戏.cpp
*/
#include <bits/stdc++.h>

int main() {
  std::vector<int> arr;
  int x;
  while (true) {
    std::cin >> x;
    if (x == 0) break;
    arr.push_back(x);
  }
  std::reverse(arr.begin(), arr.end());
  for (const auto i : arr) std::cout << i << " ";
  return 0;
}
