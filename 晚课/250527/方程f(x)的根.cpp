/*
    By Oscar Fan
    Date: 2025/5/28
    File: 方程f(x)的根.cpp
*/
#include <bits/stdc++.h>
using namespace std;

double f(double x) { return pow(2, x) + pow(3, x) - pow(4, x); }

int main() {
  double l = 1.0, r = 2.0;
  const double eps = 1e-11;
  if (fabs(f(l)) < eps) {
    cout << fixed << setprecision(10) << l << "\n";
    return 0;
  }
  if (fabs(f(r)) < eps) {
    cout << fixed << setprecision(10) << r << "\n";
    return 0;
  }
  while (r - l > eps) {
    double mid = (l + r) / 2;
    if (f(mid) == 0) {
      cout << fixed << setprecision(10) << mid << "\n";
      return 0;
    }
    if (f(l) * f(mid) < 0) r = mid;
    else
      l = mid;
  }
  cout << fixed << setprecision(10) << (l + r) / 2 << "\n";
  return 0;
}