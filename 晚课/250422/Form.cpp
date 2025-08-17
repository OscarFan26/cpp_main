/*
    By Oscar Fan
    Date: 2025/4/23
    File: Form.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int n;
bool used[10];
int ans[10];

void print() {
  for (int i = 0; i < n; i++) cout << ans[i] << " ";
  cout << '\n';
}

void search(int i) {
  if (i == n) {
    print();
    return;
  }
  for (int j = 0; j < n; j++) {
    if (used[j]) continue;
    used[j] = true;
    ans[i]  = j + 1;
    search(i + 1);
    ans[i]  = 0;
    used[j] = false;
  }
}

int main() {
  freopen("Form.in", "r", stdin);
  freopen("Form.out", "w", stdout);
  cin >> n;
  search(0);
  fclose(stdin);
  fclose(stdout);
  return 0;
}
