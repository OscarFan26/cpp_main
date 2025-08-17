/*
    By Oscar Fan
    Date: 2025/5/8
    File: 6.2.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int cards[101] = {};
  for (int i = 0; i < n; i++) cin >> cards[i];
  int avg = accumulate(cards, cards + n, 0) / n;
  for (int i = 0; i < n; i++) cards[i] -= avg;
  int cnt = 0;
  int left = 0, right = n - 1;
  while (cards[left] == 0 && left < n - 1) left++;
  while (cards[right] == 0 && right >= 0) right--;
  while (left < right) {
    cards[left + 1] += cards[left];
    cards[left] = 0;
    cnt++;
    left++;
    while (cards[left] == 0 && left < n - 1) left++;
    while (cards[right] == 0 && right >= 0) right--;
  }
  cout << cnt;
  return 0;
}
