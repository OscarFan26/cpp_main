/*
By Oscar Fan
Date: 2025/4/3
File: Queen.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int n;
int m[101];
int cnt;

void print() {
  for (int i = 0; i < n; i++) cout << m[i] + 1 << " ";
  cout << '\n';
}

void Queen(int pre) {
  if (pre == n) {
    print();
    cnt++;
    return;
  }
  for (int i = 0; i < n; i++) {
    m[pre]  = i;
    bool ok = true;
    for (int j = 0; j < pre; j++) {
      if (m[pre] == m[j] || abs(pre - j) == abs(m[pre] - m[j])) {
        ok = false;
        break;
      }
    }
    if (ok) Queen(pre + 1);
  }
}

int main() {
  freopen("Queen.in", "r", stdin);
  freopen("Queen.out", "w", stdout);
  cin >> n;
  Queen(0);
  if (cnt == 0) cout << "no solute!";
  fclose(stdin);
  fclose(stdout);
  return 0;
}