#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[10001] = {};
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[--x]++;
  }
  for (int i = 0; i < 10001; i++)
    for (int j = 0; j < a[i]; j++) cout << i + 1 << " ";
  return 0;
}
