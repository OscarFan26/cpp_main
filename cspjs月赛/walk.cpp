/*
    By Oscar Fan
    Date: 2024/6/22
    File: walk.cpp
*/
#include <bits/stdc++.h>

int main() {
  std::freopen("walk.in", "r", stdin);
  std::freopen("walk.out", "w", stdout);
  int n;
  std::cin >> n;
  std::vector<int> arr;
  std::vector<bool> mark;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    arr.push_back(x);
    mark.push_back(false);
  }
  int cnt = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (mark[i]) continue;
    int present = 0;
    for (int j = i+1; j < n; j++) {
      if (arr[j] >= arr[j-1]) { present++; mark[j] = true;}
      else break;
    }
    if (cnt < present +1) cnt= present + 1;
  }
  std::cout << cnt;
  std::fclose(stdin);
  std::fclose(stdout);
  return 0;
}
