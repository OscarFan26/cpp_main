/*
    By Oscar Fan
    Date: 2024/4/27
    File: xuanze.cpp
*/
#include <bits/stdc++.h>

int main() {
  int arr[10] = {};
  for (int i = 0; i < 10; i++) std::cin >> arr[i];
  for (int i = 0; i < 9; i++) {
    int min = i;
    for (int j = i + 1; j < 10; j++)
      if (arr[j] < arr[min]) min = j;
    std::swap(arr[i], arr[min]);
  }
  for (int i = 0; i < 10; i++) std::cout << arr[i] << " ";
  return 0;
}
