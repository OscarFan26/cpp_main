/*
    By Oscar Fan
    Date: 2024/12/13
    File: 士兵站队问题.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int x[10001], y[10001], b[10001];

void ysort(int m, int n) {
  if (m >= n) return;
  int mid = (m + n) / 2;
  ysort(m, mid);
  ysort(mid + 1, n);
  int l = m, r = mid + 1, index = 0;
  while (l <= mid && r <= n)
    if (y[l] <= y[r]) b[index++] = y[l++];
    else
      b[index++] = y[r++];
  while (l <= mid) b[index++] = y[l++];
  while (r <= n) b[index++] = y[r++];
  index = 0;
  for (int i = m; i <= n; i++) y[i] = b[index++];
}

void xsort(int m, int n) {
  if (m >= n) return;
  int mid = (m + n) / 2;
  xsort(m, mid);
  xsort(mid + 1, n);
  int l = m, r = mid + 1, index = 0;
  while (l <= mid && r <= n)
    if (x[l] <= x[r]) b[index++] = x[l++];
    else
      b[index++] = x[r++];
  while (l <= mid) b[index++] = x[l++];
  while (r <= n) b[index++] = x[r++];
  index = 0;
  for (int i = m; i <= n; i++) x[i] = b[index++];
}

int main() {
  freopen("sol.in", "r", stdin);
  freopen("sol.out", "w", stdout);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
  xsort(0, n - 1);
  ysort(0, n - 1);
  int mid = n / 2, ans = 0;
  for (int i = 0; i < n; i++) {
    ans += abs(y[i] - y[mid]);
    x[i] = x[i] - i + 1;
  }
  xsort(0, n - 1);
  for (int i = 0; i < n; i++) ans += abs(x[i] - x[mid]);
  cout << ans;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
