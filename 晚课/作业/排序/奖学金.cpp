/*
    By Oscar Fan
    Date: 2024/12/5
    File: 奖学金.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, array<int, 4>>> marks;
  for (int i = 0; i < n; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    marks.push_back({i+1, {a, b, c, a+b+c}});
  }
  int lastswap = 0;
  int k = n - 1;
  for (int i = 0; i < n; i++) {
    bool changed = false;
    for (int j = 0; j < k; j++) {
      if (marks[j].second[3] < marks[j + 1].second[3]) {
        swap(marks[j], marks[j + 1]);
        changed  = true;
        lastswap = j;
      }
    }
    if (!changed) break;
    k = lastswap;
  }
  for (int i = 0; i < 5; i++) {
    bool changed = false;
    for (int j = 0; j < 5; j++) {
      if (marks[j].second[3] == marks[j + 1].second[3] && marks[j].second[0] < marks[j+1].second[0]) {
        swap(marks[j], marks[j + 1]);
        changed  = true;
      }
    }
    if (!changed) break;
  }
  for (int i = 0; i < 5; i++) {
    bool changed = false;
    for (int j = 0; j < 5; j++) {
      if (marks[j].second[3] == marks[j + 1].second[3] && marks[j].second[0] == marks[j+1].second[0] && marks[j].first > marks[j+1].first) {
        swap(marks[j], marks[j + 1]);
        changed  = true;
      }
    }
    if (!changed) break;
  }
  for (int i = 0; i < 5; i++) cout << marks[i].first << " " << marks[i].second[3] << '\n';
  return 0;
}
