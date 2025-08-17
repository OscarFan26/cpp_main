#include <bits/stdc++.h>
using namespace std;

int arr[1001];
vector<int> solution;

bool snap(int m, int n) {
  if (m == 0) return true;
  if (n < 0 || m < 0) return false;
  if (snap(m, n - 1)) return true;
  if (snap(m - arr[n], n - 1)) {
    solution.push_back(n);
    return true;
  }
  return false;
}

int main() {
  freopen("snap.in", "r", stdin);
  freopen("snap.out", "w", stdout);
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) cin >> arr[i];
  if (!snap(m, n - 1)) {
    cout << "No solution.";
  } else {
    for (int i = 0; i < solution.size(); i++) {
      int idx = solution[i];
      printf("number:%d weight:%d\n", idx + 1, arr[idx]);
    }
  }
  fclose(stdin);
  fclose(stdout);
  return 0;
}