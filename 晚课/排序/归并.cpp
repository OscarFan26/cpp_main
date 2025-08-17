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
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  msort(0, n - 1);
  for (int i = 0; i < n; i++) cout << a[i] << " ";
  return 0;
}
