/*
    By Oscar Fan
    Date: 2025/3/27
    File: Noip1998.cpp
*/
#include <iostream>
using namespace std;

void recur(int m, int n) {
  if (m == 0) return;
  int r = m % 2;
  m /= 2;
  recur(m, n + 1);
  if (m != 0 && r != 0) cout << "+";
  if (r == 1) {
    if (n == 0) cout << "2(0)";
    else if (n == 1)
      cout << "2";
    else if (n == 2)
      cout << "2(2)";
    else {
      cout << "2(";
      recur(n, 0);
      cout << ")";
    }
  }
}
int main() {
  freopen("Noip1998.in", "r", stdin);
  freopen("Noip1998.out", "w", stdout);
  int num;
  cin >> num;
  recur(num, 0);
  fclose(stdin);
  fclose(stdout);
  return 0;
}