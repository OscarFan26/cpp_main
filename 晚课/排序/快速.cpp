#include <bits/stdc++.h>
using namespace std;

int a[10001] = {};

void fast_sort(int start, int end) {
  if (start >= end) return;
  int i = start, j = end;
  a[0] = a[end];
  while (i < j) {
    while (a[i] <= a[0] && i < j) i++;
    a[j] = a[i];
    while (a[j] >= a[0] && i < j) j--;
    a[i] = a[j];
  }
  a[i] = a[0];
  fast_sort(start, i - 1);
  fast_sort(i + 1, end);
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  fast_sort(1, n);
  for (int i = 1; i <= n; i++) cout << a[i] << " ";
  return 0;
}
