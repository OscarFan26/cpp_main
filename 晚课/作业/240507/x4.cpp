/*
    By Oscar Fan
    Date: 2024/5/12
    File: x4.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  int arr[n];
  for (int i = 0; i < n ; i++) std::cin >> arr[i];
  for (int head = 0, ramp = n-1; head <= ramp; head++, ramp--)
    std::swap(arr[head], arr[ramp]);

  return 0;
}
