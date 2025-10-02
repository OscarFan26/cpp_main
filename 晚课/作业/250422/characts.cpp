/*
    By Oscar Fan
    Date: 2025/4/25
    File: characts.cpp
*/
#include <bits/stdc++.h>
using namespace std;

char ans[101];
int cnt;
int n;

void search(int x) {
  if (x == n + 1) {
    cnt++;
    return;
  }
  for (char i = 'A'; i <= 'C'; i++) {
    if (x != 1 && i == ans[x - 2] && ans[x - 1] == ans[x - 3]) continue;
    ans[x] = i;
    search(x + 1);
    ans[x] = ' ';
  }
}

int main() {
  freopen("characts.in", "r", stdin);
  freopen("characts.out", "w", stdout);
  cin >> n;
  search(1);
  cout << cnt;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
