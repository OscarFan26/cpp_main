/*
    By Oscar Fan
    Date: 2024/5/12
    File: x5.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) std::cin >> arr[i];
  int index = 0, maxn = INT32_MIN;
  for (int i = 0; i < n; i++)
    if (arr[i] > maxn) {
      maxn  = arr[i];
      index = i;
    }
  std::cout << maxn << " " << index;
  return 0;
}
