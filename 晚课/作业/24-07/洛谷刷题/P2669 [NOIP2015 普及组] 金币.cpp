/*
    By Oscar Fan
    Date: 2024/7/5
    File: P2669 [NOIP2015 普及组] 金币.cpp
*/
#include <bits/stdc++.h>

int main() {
  int days;
  std::cin >> days;
  int pr = 1, cnt = 0, pr_day = 0;
  while (true) {
    for (int i = 0; i < pr; i++) {
      cnt += pr;
      pr_day++;
      if (pr_day == days) { std::cout << cnt; return 0;}
    }
    pr++;
  }
}
