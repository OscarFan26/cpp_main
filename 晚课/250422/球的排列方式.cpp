/*
    By Oscar Fan
    Date: 2025/4/23
    File: 球的排列方式.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int cnt;
int ball[3] = {4, 3, 3};

void search(int i) {
  if (i == 10) {
    cnt++;
    return;
  }
  for (int j = 0; j < 3; ++j) {
    if (ball[j] == 0) continue;
    ball[j]--;
    search(i + 1);
    ball[j]++;
  }
}

int main() {
  search(0);
  cout << cnt;
  return 0;
}
