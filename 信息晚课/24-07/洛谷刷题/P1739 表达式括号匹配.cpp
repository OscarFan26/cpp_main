/*
    By Oscar Fan
    Date: 2024/7/1
    File: P1739 表达式括号匹配.cpp
*/
#include <bits/stdc++.h>

int main() {
  std::stack<char> match;
  std::string pattern;
  std::cin >> pattern;
  pattern.erase(pattern.length() - 1, 1);
  for (auto i: pattern)
    if (i == '(') match.push('(');
    else if (i == ')') {
      if (match.empty()) {
        std::cout << "NO";
        return 0;
      }
      match.pop();
    }

  if (match.empty()) std::cout << "YES";
  else
    std::cout << "NO";
  return 0;
}
