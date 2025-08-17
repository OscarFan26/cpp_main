/*
    By Oscar Fan
    Date: 2025/4/25
    File: grade.cpp
*/
#include <bits/stdc++.h>
using namespace std;

bool paper[4][10] = {{0, 0, 1, 0, 1, 0, 0, 1, 0, 0},
                     {0, 1, 1, 1, 0, 1, 0, 1, 1, 1},
                     {0, 1, 1, 1, 0, 0, 0, 1, 0, 1},
                     {0, 0, 1, 1, 1, 0, 0, 1, 1, 1}};
int mark;
bool ans[10];

bool valid() {
  int x = 0, y = 0, z = 0;
  for (int i = 0; i < 10; i++) {
    if (paper[0][i] == ans[i]) x += 10;
    if (paper[1][i] == ans[i]) y += 10;
    if (paper[2][i] == ans[i]) z += 10;
  }
  if (x == 70 && y == 50 && z == 30) return true;
  return false;
}

void search(int x) {
  if (x == 10) {
    if (!valid()) return;
    for (int i = 0; i < 10; i++)
      if (paper[3][i] == ans[i]) mark += 10;
    cout << mark;
    exit(0);
  }
  for (int i = 0; i < 2; i++) {
    ans[x] = i;
    search(x + 1);
    ans[x] = 0;
  }
}

int main() {
  freopen("grade.in", "r", stdin);
  freopen("grade.out", "w", stdout);
  search(0);
  fclose(stdin);
  fclose(stdout);
  return 0;
}
