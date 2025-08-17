#include <bits/stdc++.h>
using namespace std;

int a[1001];

void fastSort(int start, int end) {
  if (start >= end) return;
  int i = start, j = end;
  a[0] = a[end];
  while (i < j) {
    while (a[i] <= a[0] && i < j) i++;
    a[j] = a[i];
    while (a[j] >= a[0] && i < j) j--;
    a[i] = a[j];
  }
  a[i]    = a[0];
  int mid = (start + end) / 2;
  fastSort(1, mid);
  fastSort(mid + 1, end);
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  fastSort(1, n);
  for (int i = 1; i <= n; i++) cout << a[i] << ' ';
  return 0;
}
