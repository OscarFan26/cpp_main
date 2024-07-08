#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("save.in", "r", stdin);
  freopen("save.out", "w", stdout);
  int money[12], curr = 0, interest_bef = 0;
  for (int i = 0; i < 12; i++) cin >> money[i];
  for (int i = 0; i < 12; i++) {
    curr += 300;
    curr -= money[i];
    if (curr < 0) {
      cout << "-" << i + 1;
      fclose(stdin);
      fclose(stdout);
      return 0;
    }
    curr %= 100;
    interest_bef += (curr / 100) * 100;
  }
  cout << interest_bef * 1.2;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
