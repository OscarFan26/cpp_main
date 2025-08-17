/*
    By Oscar Fan
    Date: 2025/5/28
    File: 一元三次方程.cpp
*/
#include <bits/stdc++.h>
using namespace std;

double a, b, c, d;

double f(double x) {
  return pow(x, 3) * a + pow(x, 2) * b + x * c + d;
}

int main() {
  cin >> a >> b >> c >> d;
  for (double l = -100.0; l <= 100.0; l += 0.005) {
    if (f(l) * f(l + 0.005) > 0) continue;
    if (f(l) == 0) {
      cout << fixed << setprecision(2) << l << " ";
      continue;
    }
    double mid = (l + l + 0.005) / 2, r = l + 0.005, pl = l;
    while (r - pl > 0.0001) {
      if (f(pl) * f(mid) > 0) pl = mid;
      else if (f(pl) * f(mid) <= 0) r = mid;
      mid = (r + pl) / 2;
    }
    cout << fixed << setprecision(2) << pl << " ";
  }
  return 0;
}
