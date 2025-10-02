#include <bits/stdc++.h>
using namespace std;

int a[1001], n = 1, dp[1001], pre[1001];
vector<int> ans;

void print(int index) {
  if (pre[index] == -1) ans.push_back(a[index]);
  else {
    ans.push_back(a[index]);
    print(pre[index]);
  }
}

int main() {
  freopen("lic.in", "r", stdin);
  freopen("lic.out", "w", stdout);
  while (cin >> a[n++]);
  for (int i = 1; i <= n; i++) {
    dp[i] = 1;
    pre[i] = -1;
    for (int j = 1; j < i; j++) {
      if (a[j] <= a[i] && dp[j] + 1 > dp[i]) {
        dp[i] = dp[j] + 1;
        pre[i] = j;
      }
    }
  }
  int maxlen = *max_element(dp + 1, dp + n);
  printf("max=%d\n", maxlen);
  print(max_element(dp + 1, dp + n) - dp);
  reverse(ans.begin(), ans.end());
  for (auto i : ans) cout << i << " ";
  cout << '\n';
  fclose(stdin);
  fclose(stdout);
  return 0;
}

