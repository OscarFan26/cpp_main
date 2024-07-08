/*
    By Oscar Fan
    Date: 2024/7/1
    File: 7.2-4 成绩排序.cpp
*/
#include <bits/stdc++.h>

struct student {
  std::string name;
  int marks;
} students[21];

bool cmp(const student& x, const student& y) {
  if (x.marks == y.marks)
    return x.name < y.name;
  else return x.marks > y.marks;
}

int main() {
  int n;
  std::cin >> n;
  for (int i = 0; i < n; i++)
    std::cin >> students[i].name >> students[i].marks;
  std::sort(students, students+n, cmp);
  for (int i = 0; i < n; i++)
    std::cout << students[i].name << " " << students[i].marks << "\n";
  return 0;
}
