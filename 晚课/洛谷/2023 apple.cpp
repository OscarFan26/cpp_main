/*
    By Oscar Fan
    Date: 2024/10/11
    File: 9748.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("apple.in", "r", stdin);
  freopen("apple.out", "w", stdout);
  int n;
  cin >> n;
  long long total = 0, num = 0;
  while (n) {
    total++;
    if (!num && n % 3 == 1) num = total;
    n -= ceil(n / 3.0);
  }
  cout << total << " " << num;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
