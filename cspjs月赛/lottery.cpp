/*
    By Oscar Fan
    Date: 2024/6/22
    File: lottery.cpp
*/
#include <bits/stdc++.h>

int main() {
  std::freopen("lottery.in", "r", stdin);
  std::freopen("lottery.out", "w", stdout);
  std::string result, tgt, new_tgt;
  std::cin >> result >> tgt;

  for (int i = 0; i < 4; i++)
    for (int j = i + 1; j < 4; j++)
      if (tgt[i] == tgt[j]) tgt[j] = ' ';
  for (auto i: tgt)
    if (i != ' ') new_tgt += i;
  int reward = 0, exactly_same = 0, contains = 0;
  for (int i = 0; i < new_tgt.length(); i++) {
    if (new_tgt[i] == result[i]) exactly_same++;
    else {
      for (auto x: result)
        if (x == new_tgt[i]) {
          contains++;
          break;
        }
    }
  }
  switch (exactly_same) {
    case 4:
      reward += 2000;
      break;
    case 3:
      reward += 800;
      break;
    case 2:
      reward += 300;
      break;
    case 1:
      reward += 100;
      break;
  }
  switch (contains) {
    case 4:
      reward += 200;
      break;
    case 3:
      reward += 80;
      break;
    case 2:
      reward += 30;
      break;
    case 1:
      reward += 10;
      break;
  }
  std::cout << reward;
  std::fclose(stdin);
  std::fclose(stdout);
  return 0;
}
