/*
    By Oscar Fan
    Date: 2025/5/8
    File: 6.3.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int s;
  string n;
  cin >> n;
  cin >> s;
  int len = n.length();
  for (int i = 0; i < s; i++) {
    for (int j = 0; j < len - 1; j++) {
      if (n[j] > n[j + 1]) {
        n.erase(j, 1);
        break;
      }
    }
    len--;
  }
  while (n[0] == '0') n.erase();
  for (int i = 0; i < len; i++) cout << n[i];
  return 0;
}
