/*
    By Oscar Fan
    Date: 2025/8/22
    File: LCS.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  int n = a.length(), m = b.length();
  vector<vector<int>> dp(n+1, vector<int>(m+1));
  for (int i = 0; i < n; i++) dp[i][0] = 0;
  for (int i = 0; i < m; i++) dp[0][i] = 0;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= m; j++)
      if (a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
      else
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
  cout << dp[n][m] << endl;
  return 0;
}
