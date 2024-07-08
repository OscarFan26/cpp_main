/*
    By Oscar Fan
    Date: 2024/4/4
    File: e4.cpp
*/
#include <bits/stdc++.h>

struct student {
  std::string name;
  float marks;

  bool operator>(const student &x) { return this->marks > x.marks; }
};

int main() {
  int n;
  std::cin >> n;
  student students[n];
  for (int i = 0; i < n; i++) std::cin >> students[i].name >> students[i].marks;
  std::sort(students, students + n, std::greater<>());
  for (auto& x : students) std::cout << x.name << " " << x.marks << "\n";
  return 0;
}
