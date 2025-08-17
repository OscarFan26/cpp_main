#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("carry.in", "r", stdin);
  freopen("carry.out", "w", stdout);
  int arr[10001], cnt = 0, n;
  cin >> n;
  for (int i = 0; i < n; i++) cin >> arr[i];
  bool flag = false;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        cnt++;
        flag = true;
      }
    }
    if (!flag) break;
  }
  cout << cnt << "\n";
  fclose(stdin);
  fclose(stdout);
  return 0;
}
