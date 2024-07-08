/*
    By Oscar Fan
    Date: 2024/4/4
    File: e2.cpp
*/
#include <bits/stdc++.h>

struct patient {
  std::string name;
  float temperature;
  bool cough;
};

int main() {
  int n;
  std::cin >> n;
  patient patients[n];
  for (int i = 0; i < n; i++) std::cin >> patients[i].name >> patients[i].temperature >> patients[i].cough;
  int cnt = 0;
  for (auto &x: patients)
    if (x.temperature >= 37.5 && x.cough) {
      cnt++;
      std::cout << x.name << "\n";
    }
  std::cout << cnt;
  return 0;
}
