/*
    By Oscar Fan
    Date: 2024/5/22
    File: 1065.cpp
*/
#include <bits/stdc++.h>

int main() {
  int arr[5][5] = {};
  int cnt = 1;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      arr[i][j] = cnt;
      cnt++;
    }
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (j < 5-i-1) std::printf("  ");
      else std::printf("%2d", arr[i][j]);
      if (j != 4) std::printf(" ");
      else std::printf("\n");
    }
  }
  return 0;
}
