/*
    By Oscar Fan
    Date: 2025/4/6
    File: 四人满意的方案.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int a[5];
bool used[5];
bool y[5][5] = {{0, 0, 1, 1, 0}, {1, 1, 0, 0, 1}, {0, 1, 1, 0, 0}, {1, 1, 0, 1, 0}, {0, 1, 0, 0, 1}};

void print() {
  for (int i : a) cout << char('A' + i) << ' ';
  cout << '\n';
}

void search(int pre) {
  if (pre == 5) {
    print();
    return;
  }
  for (int i = 0; i < 5; i++) {
    if (!y[pre][i] || used[i]) continue;
    a[pre]  = i;
    used[i] = true;
    search(pre + 1);
    used[i] = false;
  }
}

int main() {
  search(0);
  return 0;
}
