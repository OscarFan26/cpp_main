/*
    By Oscar Fan
    Date: 2025/3/9
    File: knight.cpp
*/
#include <bits/stdc++.h>
using namespace std;

long long arr[21][21], mmap[21][21];

void init(long long x, long long y) {
  mmap[x][y]         = 1;
  mmap[x - 1][y - 2] = 1;
  mmap[x - 2][y - 1] = 1;
  mmap[x - 2][y + 1] = 1;
  mmap[x - 1][y + 2] = 1;
  mmap[x + 1][y - 2] = 1;
  mmap[x + 2][y - 1] = 1;
  mmap[x + 2][y + 1] = 1;
  mmap[x + 1][y + 2] = 1;
}

int main() {
  freopen("knight.in", "r", stdin);
  freopen("knight.out", "w", stdout);
  long long a, b, m, n;
  cin >> n >> m >> a >> b;
  a++; b++; n++; m++;
  init(a, b);
  arr[1][1] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (i == 1 && j == 1) continue;
      if (mmap[i][j] == 0) arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
    }
  }
  cout << arr[n][m];
  fclose(stdin);
  fclose(stdout);
  return 0;
}