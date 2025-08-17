/*
    By Oscar Fan
    Date: 2024/5/22
    File: 1066.cpp
*/
#include <bits/stdc++.h>

int main() {
  int arr[2][3];
  for (int i = 0; i < 2; i++) for (int j = 0; j < 3; j++) std::cin >> arr[i][j];
  for (int i = 0; i < 6; i++) {
    if (!(i%2)) std::printf("%d ", arr[i/3][i%3]);
    else std::printf("%d\n", arr[i/3][i%3]);
  }
  return 0;
}
