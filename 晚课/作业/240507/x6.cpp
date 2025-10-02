/*
    By Oscar Fan
    Date: 2024/5/12
    File: x6.cpp
*/
#include <bits/stdc++.h>

int main() {
  int arr[53]= {};
  for (int i = 1; i <= 26; i++) {
    for (int j = i; j <= 52; j += i) arr[j] = (arr[j] ? 0 : 1);
  }
  int cnt = 0;
  for (auto i : arr)
    if (i) cnt++;
  std::cout << cnt << "\n";
  for (int i = 1; i <= 52; i++) if (arr[i]) std::cout << i << " ";
  return 0;
}
