/*
    By Oscar Fan
    Date: 2024/7/1
    File: P2084 进制转换.cpp
*/
#include <bits/stdc++.h>

int main() {
  std::string n;
  char m;
  std::cin >> m >> n;
  std::vector<std::string> lst(1001);
  for (int i = 0; i < n.length(); i++) {
    if (n[i] == '0') continue;
    std::stringstream ss;
    ss << n[i] << "*" << m << "^" << n.length()-i-1;
    lst.push_back(ss.str());
  }
  std::string result;
  for (auto i : lst) { if(!i.empty()) result += (i + "+");}
  result.erase(result.length()-1, 1);
  std::cout << result;
  return 0;
}
