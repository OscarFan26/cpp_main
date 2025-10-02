/*
    By Oscar Fan
    Date: 2024/4/27
    File: tree.cpp
*/
#include <bits/stdc++.h>

int main() {
//  std::freopen("tree.in", "r", stdin);
//  std::freopen("tree.out", "w", stdout);
  int trees[100001] = {}, L, M;
  std::cin >> L >> M;
  for (int i = 0; i < M; i++) {
    int x, y;
    std::cin >> x >> y;
    if (x > y) std::swap(x, y);
    for (int j = x; j <= y; j++) trees[j] = 1;
  }
  int cnt = 0;
  for (int i = 0; i < L + 1; i++) if (!trees[i]) cnt++;
  std::cout << cnt;
//  std::fclose(stdin);
//  std::fclose(stdout);
  return 0;
}
