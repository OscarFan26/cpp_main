/*
    By Oscar Fan
    Date: 2025/4/23
    File: subsum.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int n, c;
int s[101];
int ans[101];
bool used[101];
bool done;
int pre;

void search(int x) {
  if (done) return;
  if (x == pre) {
    if (accumulate(ans, ans + pre, 0) != c) return;
    done = true;
    for (int i = 0; i < pre; i++) cout << ans[i] << " ";
    return;
  }
  for (int i = 0; i < n; i++) {
    if (done) return;
    if (used[i]) continue;
    used[i] = true;
    ans[x]  = s[i];
    search(x + 1);
    ans[x]  = 0;
    used[i] = false;
  }
}

int main() {
  freopen("subsum.in", "r", stdin);
  freopen("subsum.out", "w", stdout);
  cin >> n >> c;
  for (int i = 0; i < n; i++) cin >> s[i];
  for (pre = 1; pre <= n; pre++) search(0);
  if (!done) cout << "No solution!";
  fclose(stdin);
  fclose(stdout);
  return 0;
}
