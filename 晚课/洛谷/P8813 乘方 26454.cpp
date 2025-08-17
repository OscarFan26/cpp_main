#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("pow.in", "r", stdin);
  freopen("pow.out", "w", stdout);
  int a, b;
  cin >> a >> b;
  if (a == 1) {
	cout << 1;
	return 0;	
  }
  long long sum = 1;
  for (int i = 0; i < b; i++) {
    sum *= a;
    if (sum > 1e9) {
      cout << "-1";
      return 0;
    }
  }
  cout << sum;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
