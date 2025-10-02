/*
    By Oscar Fan
    Date: 2025/6/4
    File: mod.cpp
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll expn, p, k;

ll mod(ll p) {
  if (p == 0) return 1;
  ll rem = mod(p / 2) % k;
  if (p % 2) return (((rem * rem) % k) * expn) % k;
  return (rem * rem) % k;
}

int main() {
  freopen("mod.in", "r", stdin);
  freopen("mod.out", "w", stdout);
  cin >> expn >> p >> k;
  cout << expn;
  expn %= k;
  printf("^%lld mod %lld=%lld", p, k, mod(p));
  fclose(stdin);
  fclose(stdout);
  return 0;
}
