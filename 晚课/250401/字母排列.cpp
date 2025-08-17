/*
    By Oscar Fan
    Date: 2025/4/4
    File: 字母排列.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int m, n;

char output[26];
bool used[26];

void print() {
  for (int i = 0; i < n; i++) cout << output[i];
  cout << '\n';
}

void search(int now) {
  if (now == n) {
    print();
    return;
  }
  for (int i = 0; i < m; i++) {
    if (used[i]) continue;
    used[i] = true;
    output[now] = 'A' + i;
    search(now + 1);
    used[i] = false;
  }
}

int main() {
  cin >> m >> n;
  search(0);
  return 0;
}
