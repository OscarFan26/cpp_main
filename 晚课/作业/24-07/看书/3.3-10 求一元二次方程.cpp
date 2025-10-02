/*
    By Oscar Fan
    Date: 2024/7/1
    File: 3.3-10 求一元二次方程.cpp
*/
#include <bits/stdc++.h>

int main() {
  double a, b, c;
  std::cin >> a >> b >> c;
  if (b * b - 4 * a * c < 0) std::cout << "原方程无实数根";
  else {
    double delta = b * b - 4 * a * c;
    if (delta == 0) std::cout << std::fixed << std::setprecision(5) << "x1 = x2 = " << (-b) / (2.0 * a);
    else
      std::cout << std::fixed << std::setprecision(5) << "x1 = " << (-b + sqrt(delta)) / (2.0 * a)
                << " x2 = " << (-b - sqrt(delta)) / (2.0 * a);
  }
  return 0;
}
