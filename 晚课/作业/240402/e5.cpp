/*
    By Oscar Fan
    Date: 2024/4/4
    File: e5.cpp
*/
#include <bits/stdc++.h>

struct patient {
  int name;
  short age;
};

int main() {
  int n;
  std::cin >> n;
  patient patients[n];
  for (int i = 0; i < n;  i++) std::cin >> patients[i].name >> patients[i].age;
  std::sort(patients, patients+n, [](const patient& x, const patient& y) {
    if (x.age >= 60 && y.age >= 60) return x.age > y.age;
    if (x.age >= 60) return true;
    if (y.age >= 60) return false;
    return false;
  });
  for (auto& x : patients) std::cout << x.name << "\n";
  return 0;
}
