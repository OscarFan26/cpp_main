/*
    By Oscar Fan
    Date: 2024/7/3
    File: P5082 成绩.cpp
*/
#include <bits/stdc++.h>

int main() {
  int n;
  std::vector<int> full_marks, actual_marks;
  std::cin >> n;
  int x;
  for (int i = 0; i < n; i++) {
    std::cin >> x;
    full_marks.push_back(x);
  }
  for (int i = 0; i < n; i++) {
    std::cin >> x;
    actual_marks.push_back(x);
  }
  long long all_full_marks = 0, all_actual_marks = 0, all_lose_pts = 0;
  for (int i = 0; i < n; i++) {
    all_full_marks += full_marks[i];
    all_actual_marks += actual_marks[i];
  }
  all_lose_pts = all_full_marks - all_actual_marks;
  std::cout << std::fixed << std::setprecision(6) << 1.0 * (all_full_marks * 3 - all_actual_marks * 2) / all_lose_pts;
  return 0;
}
