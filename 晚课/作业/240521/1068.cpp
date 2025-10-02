/*
    By Oscar Fan
    Date: 2024/5/22
    File: 1068.cpp
*/
#include <bits/stdc++.h>

int main() {
  int arr[9][9] = {};
  int head = 0, rear = 8, cnt = 1;
  while (head <= rear) {
    for (int j = head; j < rear; ++j) {
      arr[head][j] = cnt;
      cnt++;
    }
    for (int i = head; i < rear; ++i) {
      arr[i][rear] = cnt;
      cnt++;
    }
    for (int j = rear; j >= head + 1; --j) {
      arr[rear][j] = cnt;
      cnt++;
    }
    for (int i = rear; i >= head + 1; --i) {
      arr[i][head] = cnt;
      cnt++;
    }
    head++;
    rear--;
  }
  arr[9/2][9/2] = cnt;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) std::cout << std::setw(2) << arr[i][j] << " ";
    std::cout << "\n";
  }
  return 0;
}

