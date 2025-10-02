/*
    By Oscar Fan
    Date: 2025/5/16
    File: maxnum.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  //  freopen("maxnum.in", "r", stdin);
  //  freopen("maxnum.out", "w", stdout);
  int n;
  cin >> n;
  string s[21];
  for (int i = 0; i < n; i++) cin >> s[i];
  sort(s, s + n, greater<>());
  for (int i = 0; i < n; i++) cout << s[i];
  //  fclose(stdin);
  //  fclose(stdout);
  return 0;
}
