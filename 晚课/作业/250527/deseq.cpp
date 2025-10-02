#include <bits/stdc++.h>
using namespace std;

int n;
long long ans;
int a[500001], temp[500001];

void mergeSort(int l, int r, int mid) {
  int i = l, p = l, j = mid;
  while (i < mid && j <= r) {
    if (a[i] <= a[j]) temp[p++] = a[j++];
    else {
      ans += r - j + 1;
      temp[p++] = a[i++];
    }
  }
  while (i < mid) temp[p++] = a[i++];
  while (j <= r) temp[p++] = a[j++];
  for (int k = l; k <= r; k++) a[k] = temp[k];
}

void mergeStart(int l, int r) {
  if (l < r) {
    int mid = (l + r) / 2;
    mergeStart(l, mid);
    mergeStart(mid + 1, r);
    mergeSort(l, r, mid + 1);
  }
}

int main() {
//  freopen("deseq.in", "r", stdin);
//  freopen("deseq.out", "w", stdout);
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++) cin >> a[i];
  mergeStart(1, n);
  cout << ans << "\n";
//  fclose(stdin);
//  fclose(stdout);
  return 0;
}
