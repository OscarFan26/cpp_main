/*
    By Oscar Fan
    Date: 2024/4/4
    File: e3.cpp
*/
#include <bits/stdc++.h>

struct student {
  int name;
  float marks;

  bool operator>(const student &x) { return this->marks > x.marks; }
};

int main() {
  int n, k;
  std::cin >> n >> k;
  student students[n];
  for (int i = 0; i < n; i++) std::cin >> students[i].name >> students[i].marks;

  std::sort(students, students + n, std::greater<>());
  std::printf("%d %g", students[k - 1].name, students[k - 1].marks);
  return 0;
}
