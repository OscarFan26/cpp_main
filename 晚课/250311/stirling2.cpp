/*
    By Oscar Fan
    Date: 2025/3/14
    File: stirling2.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("stirling2.in", "r", stdin);
  freopen("stirling2.out", "w", stdout);
  int n, m;
  cin >> n >> m;
  int s2[101][101] = {};
  for (int i = 0; i <= n; i++) {
    s2[i][0] = 0;
    s2[i][1] = 1;
    s2[i][i] = 1;
  }
  if (m == 0 || m == 1 || m == n) {
    cout << s2[n][m];
    return 0;
  }
  for (int i = 2; i <= n; i++) {
    for (int j = 2; j <= m; j++) {
      s2[i][j] = s2[i-1][j-1] + j * s2[i-1][j];
    }
  }
  cout << s2[n][m];
  fclose(stdin);
  fclose(stdout);
  return 0;
}
