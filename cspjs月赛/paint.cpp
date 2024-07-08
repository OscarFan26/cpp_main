/*
    By Oscar Fan
    Date: 2024/6/22
    File: paint.cpp
*/
#include <bits/stdc++.h>

int main() {
  std::freopen("paint.in", "r", stdin);
  std::freopen("paint.out", "w", stdout);
  std::string str;
  int first, last;
  std::cin >> str;
  for (int i = 0; i < str.length(); i++)
    if (str[i] == 'B') {
      first = i;
      break;
    }
  for (int i = str.length() - 1; i >= 0; i--)
    if (str[i] == 'B') {
      last = i;
      break;
    }
  std::cout << last-first+1;
  std::fclose(stdin);
  std::fclose(stdout);
  return 0;
}
