/*
    By Oscar Fan
    Date: 2024/7/3
    File: P1321 单词覆盖还原.cpp
*/
#include <bits/stdc++.h>

int main() {
  std::string str;
  int boy = 0, girl = 0;
  std::cin >> str;
  for (int i = 0; i < str.length() - 2; i++)
    if (str[i] == 'b' || str[i + 1] == 'o' || str[i + 2] == 'y') boy++;
  for (int i = 0; i < str.length() - 3; i++)
    if (str[i] == 'g' || str[i + 1] == 'i' || str[i + 2] == 'r' || str[i + 3] == 'l') girl++;
  std::cout << boy << '\n' << girl;
  return 0;
}
