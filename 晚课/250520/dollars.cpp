/*
    By Oscar Fan
    Date: 2025/5/23
    File: dollars.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("dollars.in", "r", stdin);
  freopen("dollars.out", "w", stdout);
  int n;
  cin >> n;
  int rate[101] = {};
  for (int i = 0; i < n; i++) cin >> rate[i];
  double money = 100.0;
  bool type    = true; /* true: $; false: DM */
  for (int i = 0; i < n; i++)
    if (!type) {
      if (rate[i + 1] < rate[i] && i != n - 1) continue;
      money = (money / rate[i]) * 100;
      type  = true;
    } else {
      if (rate[i + 1] > rate[i] && i == n - 1) continue;
      money = (money / 100) * rate[i];
      type  = false;
    }
  cout << fixed << setprecision(2) << money;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
