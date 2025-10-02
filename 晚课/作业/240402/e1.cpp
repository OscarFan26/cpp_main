/*
    By Oscar Fan
    Date: 2024/4/4
    File: e1.cpp
*/
#include <bits/stdc++.h>

struct student {
  std::string name;
  short marks;

  bool operator>(const student &x) { return this->marks > x.marks; }
};

int main() {
  int n;
  std::cin >> n;
  student students[n];
  for (int i = 0; i < n; i++) std::cin >> students[i].marks >> students[i].name;
  std::sort(students, students + n, std::greater<>());
  std::cout << students[0].name;
  return 0;
}
