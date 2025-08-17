/*
    By Oscar Fan
    Date: 2025/4/4
    File: 全排列.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int letters[4];

void print() {
  string output = "xxxx";
  for (int i = 0; i < 4; i++) output[letters[i] - 1] = 'A' + i;
  cout << output << '\n';
}

void find(int n) {
  if (n == 5) {
    print();
    return;
  }
  for (int i = 0; i < 4; i++) {
    if (letters[i] != 0) continue;
    letters[i] = n;
    find(n + 1);
    letters[i] = 0;
  }
}

int main() {
  find(1);
  return 0;
}
