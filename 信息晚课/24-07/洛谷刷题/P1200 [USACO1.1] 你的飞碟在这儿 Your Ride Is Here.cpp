/*
    By Oscar Fan
    Date: 2024/7/3
    File: P1200 [USACO1.1] 你的飞碟在这儿 Your Ride Is Here.cpp
*/
#include <bits/stdc++.h>

int main() {
  std::string comet, team;
  std::cin >> comet >> team;
  int comet_x = 1, team_x = 1;
  for (auto i : comet) comet_x *= i - 'A' + 1;
  for (auto i : team) team_x *= i - 'A' + 1;
  comet_x %= 47;
  team_x %= 47;
  if (comet_x == team_x) std::cout << "GO";
  else std::cout << "STAY";
  return 0;
}
