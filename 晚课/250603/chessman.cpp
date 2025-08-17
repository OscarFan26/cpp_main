/*
    By Oscar Fan
    Date: 2025/6/4
    File: chessman.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int step = 0;
  cout << "step 0:";
  for (int i = 1; i <= n; i++) cout << "o";
  for (int i = 1; i <= n; i++) cout << "*";
  cout << "--" << "\n";
  for (int i = 2; i <= n - 3; i++) {
    printf("step %d:", ++step);
    for (int j = n; j >= i; j--) cout << "o";
    cout << "--";
    for (int j = n; j >= i; j--) cout << "*";
    for (int j = 1; j < i; j++) cout << "o*";
    cout << "\n";
    printf("step %d:", ++step);
    for (int j = n; j >= i; j--) cout << "o";
    for (int j = n; j >= i; j--) cout << "*";
    cout << "--";
    for (int j = 1; j < i; j++) cout << "o*";
    cout << "\n";
  }
  if (n > 4) {
    printf("step %d:", ++step);
    cout << "ooo--***";
    for (int i = 1; i <= n - 3; i++) cout << "o*";
    cout << "\n";
  }
  printf("step %d:", ++step);
  cout << "ooo*o**--*";
  for (int i = 1; i <= n - 4; i++) cout << "o*";
  cout << "\n";
  printf("step %d:", ++step);
  cout << "o--*o**o";
  for (int i = 1; i <= n - 3; i++) cout << "o*";
  cout << "\n";
  printf("step %d:", ++step);
  cout << "o*o*o*--";
  for (int i = 1; i <= n - 3; i++) cout << "o*";
  cout << "\n";
  printf("step %d:", ++step);
  cout << "--";
  for (int i = 1; i <= n; i++) cout << "o*";
  return 0;
}