/*
    By Oscar Fan
    Date: 2025/8/22
    File: huiwen.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));
  for (int i = 0; i < n; i++) {
    dp[i][i]     = true;
    dp[i][i + 1] = s[i] == s[i + 1];
  }
  for (int x = 2; x < n; x++) {
    for (int i = 0, j = i + x; j < n; i++, j++)
      if (s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1];
      else dp[i][j] = false;
  }
  int len = INT_MIN;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (dp[i][j]) {
        len = max(len, j - i + 1);
      }
    }
  }
  cout << len << endl;
  return 0;
}
