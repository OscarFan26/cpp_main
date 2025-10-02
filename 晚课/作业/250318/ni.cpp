/*
    By Oscar Fan
    Date: 2025/3/22
    File: ni.cpp
*/
#include <bits/stdc++.h>
using namespace std;

unsigned long long ni(int n) {
  if (n == 1) return 1;
  return n * ni(n - 1);
}

int main() {
  freopen("ni.in", "r", stdin);
  freopen("ni.out", "w", stdout);
  int n;
  cin >> n;
  cout << n << "!=" << ni(n);
  fclose(stdin);
  fclose(stdout);
  return 0;
}
