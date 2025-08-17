#include <bits/stdc++.h>
#include <vector>
using namespace std;

int eff[21][21];
bool used[21];
int meff = INT_MAX;
int peff;
int n;

void search(int i) {
  if (i == n) {
    if (peff < meff) meff = peff;
    return;
  }
  for (int j = 0; j < n; j++) {
    if (used[j]) continue;
    peff += eff[i][j];
    used[j] = true;
    search(i + 1);
    used[j] = false;
    peff -= eff[i][j];
  }
}

int main() {
  freopen("job.in", "r", stdin);
  freopen("job.out", "w", stdout);
  cin >> n;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) cin >> eff[i][j];
  search(0);
  cout << meff;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
