/*
    By Oscar Fan
    Date: 2025/3/23
    File: hanoi.cpp
*/
#include <bits/stdc++.h>
using namespace std;

void hanoi(char a, char b, char c, int n) {
  if (n == 1) {
    printf("%d %c %c\n", n, a, b);
    return;
  }
  hanoi(a, c, b, n - 1);
  printf("%d %c %c\n", n, a, b);
  hanoi(c, b, a, n - 1);
}

int main() {
//  freopen("hanoi.in", "r", stdin);
//  freopen("hanoi.out", "w", stdout);
  int n;
  cin >> n;
  hanoi('A', 'B', 'C', n);
//  fclose(stdin);
//  fclose(stdout);
  return 0;
}
