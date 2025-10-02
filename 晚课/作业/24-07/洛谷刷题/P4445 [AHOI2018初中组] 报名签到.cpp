/*
    By Oscar Fan
    Date: 2024/7/5
    File: P4445 [AHOI2018初中组] 报名签到.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  long long cnt = 0;
  std::vector<int> arr;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    std::cin >> x;
    arr.push_back(x);
  }
  for (int i = 1; i < n; i++) cnt += std::max(arr[i - 1], arr[i]);
  std::cout << cnt;
  return 0;
}
