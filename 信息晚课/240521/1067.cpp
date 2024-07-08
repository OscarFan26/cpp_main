/*
    By Oscar Fan
    Date: 2024/5/22
    File: 1067.cpp
*/
#include <bits/stdc++.h>

int main() {
  int m, n;
  while (std::cin >> m >> n) {
    int arr[m][n];
    int cnt = 2;
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        arr[i][j] = cnt;
        cnt += 2;
      }
    }
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++) {
        std::cout << arr[i][j];
        if (j == n - 1) std::cout << "\n";
        else
          std::cout << " ";
      }
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++) {
        std::cout << arr[j][i];
        if (j == m - 1) std::cout << "\n";
        else
          std::cout << " ";
      }
  }
  return 0;
}
