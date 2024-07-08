/*
    By Oscar Fan
    Date: 2024/6/22
    File: move.cpp
*/
#include <bits/stdc++.h>

int main() {
  std::freopen("move.in", "r", stdin);
  std::freopen("move.out", "w", stdout);
  int n;
  std::cin >> n;
  std::vector<int> lst;
  for (int i = 0; i <= n; i++) lst.push_back(-1);
  lst[0] = 0;
  lst[2] = 1;
  lst[3] = 1;
  for (int i = 1; i <= n; i++) {
    if (lst[i] == -1) {
      std::vector<int> avail;
      bool x1 = true, x2 = true, x3 = true, x4 = true;
      if (i - 2 < 1) x2 = false, x1 = false;
      if (i - 3 < 1) x1 = false;
      if (i + 2 > n) x3 = false, x4 = false;
      if (i + 3 > n) x4 = false;
      if (x3 && lst[i+2] == -1) x3 = false;
      if (x4 && lst[i+3] == -1) x4 = false;
      if (x1) avail.push_back(lst[i-3]);
      if (x2) avail.push_back(lst[i-2]);
      if (x3) avail.push_back(lst[i+2]);
      if (x4) avail.push_back(lst[i+3]);
      int mininum = INT_MAX;
      for (auto i : avail) if (mininum > i) mininum = i;
      lst[i] = mininum + 1;
    }
  }
  std::cout << lst[n];
  std::fclose(stdin);
  std::fclose(stdout);
  return 0;
}
