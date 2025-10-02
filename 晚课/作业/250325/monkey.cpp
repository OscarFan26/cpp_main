/*
    By Oscar Fan
    Date: 2025/3/27
    File: monkey.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("monkey.in", "r", stdin);
  freopen("monkey.out", "w", stdout);
  int n = 1;
  /* 没意思 真没意思 */
  for (int i = 0; i < 9; i++) {
    n++;
    n *= 2;
  }
  cout << n;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
