/*
    By Oscar Fan
    Date: 2024/6/22
    File: music.cpp
*/
#include <bits/stdc++.h>

int main() {
  std::freopen("music.in", "r", stdin);
  std::freopen("music.out", "w", stdout);
  std::string str;
  std::cin >> str;
  std::regex r("(WUB)+");
  str = std::regex_replace(str, r, " ");
  for (int i = 0; i < str.length(); i++)
    if (str[i] == ' ') str.erase(i, 1);
    else
      break;
  for (int i = str.length() - 1; i >= 0; i--)
    if (str[i] == ' ') str.erase(i, 1);
    else
      break;
  std::cout << str;
  std::fclose(stdin);
  std::fclose(stdout);
  return 0;
}
