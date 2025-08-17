/*
    By Oscar Fan
    Date: 2024/12/4
    File: 众数.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("masses.in", "r", stdin);
  freopen("masses.out", "w", stdout);
  int n;
  cin >> n;
  int a[10001] = {};
  for (int i = 0; i < n; i++) cin >> a[i];
  int lastswap = 0, k = n - 1;
  for (int i = 0; i < n; i++) {
    bool changed = false;
    for (int j = 0; j < k; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        changed  = true;
        lastswap = j;
      }
    }
    if (!changed) break;
    k = lastswap;
  }
  vector<pair<int, int>> times;
  int cnt = 1;
  for (int i = 0; i < n-1; i++) {
    if (a[i] == a[i+1]) cnt++;
    else {
      if (cnt == 1) continue;
      times.push_back({a[i], cnt});
      cnt = 1;
    }
  }
  int biggest = INT_MIN;
  for (auto i : times) if (i.second > biggest) biggest = i.second;
  for (auto i : times) if (i.second == biggest) cout << i.first << " " << i.second << "\n";
  fclose(stdin);
  fclose(stdout);
  return 0;
}
