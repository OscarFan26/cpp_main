/*
    By Oscar Fan
    Date: 2025/4/23
    File: Compages.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int ans[22];
bool used[22];
int n, r;

void print() {
  for (int i = 0; i < r; i++) cout << ans[i] << " ";
  cout << '\n';
}

void search(int x) {
  if (x == r) {
    print();
    return;
  }
  for (int i = 0; i < n; i++) {
    if (used[i] || x != 0 && i + 1 < ans[x - 1]) continue;
    used[i] = true;
    ans[x]  = i + 1;
    search(x + 1);
    ans[x]  = 0;
    used[i] = 0;
  }
}

int main() {
  freopen("Compages.in", "r", stdin);
  freopen("Compages.out", "w", stdout);
  cin >> n >> r;
  search(0);
  fclose(stdin);
  fclose(stdout);
  return 0;
}
