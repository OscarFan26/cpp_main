#include <bits/stdc++.h>
using namespace std;

int a[10001], b[10001];

void msort(int m, int n) {
  if (m >= n) return;
  int mid = (m + n) / 2;
  msort(m, mid);
  msort(mid + 1, n);
  int l = m, r = mid + 1, index = 0;
  while (l <= mid && r <= n)
    if (a[l] <= a[r]) b[index++] = a[l++];
    else
      b[index++] = a[r++];
  while (l <= mid) b[index++] = a[l++];
  while (r <= n) b[index++] = a[r++];
  index = 0;
  for (int i = m; i <= n; i++) a[i] = b[index++];
}

int main() {
  freopen("pipe.in", "r", stdin);
  freopen("pipe.out", "w", stdout);
  int n;
  cin >> n;
  int x;
  for (int i = 0; i < n; i++) cin >> x >> a[i];
  msort(0, n - 1);
  int mid = n / 2, ans = 0;
  for (int i = 0; i < mid; i++) ans += a[n - i - 1] - a[i];
  cout << ans;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
