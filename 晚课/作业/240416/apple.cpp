/*
    By Oscar Fan
    Date: 2024/4/27
    File: apple.cpp
*/
#include <bits/stdc++.h>

int main() {
  int heights[10] = {}, reach;
  for (int i = 0; i < 10; i++) std::cin >> heights[i];
  std::cin >> reach;
  int cnt = 0;
  for (auto i : heights) if (i <= reach + 30) cnt++;
  std::cout << cnt;
  return 0;
}
