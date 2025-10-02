/*
    By Oscar Fan
    Date: 2024/4/4
    File: 7.2.cpp
*/
#include <bits/stdc++.h>

struct student {
  std::string name;
  int chinese;
  int maths;
  int total;

  bool operator >(const student& x) {
    return this->total > x.total;
  }
};

int main() {
  int n;
  std::cin >> n;
  student students[n];
  for (int i = 0; i < n; i++) {
    std::cin >> students[i].name >> students[i].chinese >> students[i].maths;
    students[i].total = students[i].chinese + students[i].maths;
  }
  std::sort(students, students + n, std::greater<>());
  /* 由于NOIP只允许使用C++14标准，因此不能使用C++17的Decomposition in range-based `for` loop */
  for (const auto& x : students) std::cout << x.name << " " << x.chinese << " " << x.maths << " " << x.total << "\n";
  return 0;
}
