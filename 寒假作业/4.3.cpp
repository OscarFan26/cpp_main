/*
    By Oscar Fan
    Date: 2024/1/6
    File: 4.3.cpp
*/
#include <bits/stdc++.h>

int main() {
  int sumx = 0, sumy = 0;
  for (int odd = 2, even = 1; odd <= 100; odd += 2, even += 2)
    sumx += odd, sumy += even;
  std::cout << sumx << " " << sumy;
  return 0;
}
