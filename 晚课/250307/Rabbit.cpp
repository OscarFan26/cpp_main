/*
    By Oscar Fan
    Date: 2025/3/7
    File: Rabbit.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("Rabbit.in", "r", stdin);
  freopen("Rabbit.out", "w", stdout);
  int n;
  cin >> n;
  int a[1001] = {1, 1};
  for (int i = 2; i < n; i++) a[i] = a[i - 1] + a[i - 2];
  cout << a[n-1];
  fclose(stdin);
  fclose(stdout);
  return 0;
}
