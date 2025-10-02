/*
    By Oscar Fan
    Date: 2024/7/5
    File: P4327 [COCI2006-2007#1] Okviri.cpp
*/
#include <bits/stdc++.h>

int main() {
  char frame[5][201] = {};
  std::string input;
  std::cin >> input;
  for (int i = 0; i < input.length(); i++) {
    if ((i + 1) % 3 == 0) continue;
    char picture[6] = "#.X.#";
    picture[2] = input[i];
    std::strcpy(frame[0]+4*i, "..#..");
    std::strcpy(frame[1]+4*i, ".#.#.");
    std::strcpy(frame[2]+4*i, picture);
    std::strcpy(frame[3]+4*i, ".#.#.");
    std::strcpy(frame[4]+4*i, "..#..");
  }
  for (int i = 2; i < input.length(); i += 3) {
    char picture[6] = "*.X.*";
    char prev0 = frame[0][4*i+5];
    char prev1 = frame[1][4*i+5];
    char prev2 = frame[2][4*i+5];
    char prev3 = frame[3][4*i+5];
    char prev4 = frame[4][4*i+5];
    picture[2] = input[i];
    std::strcpy(frame[0]+4*i, "..*..");
    std::strcpy(frame[1]+4*i, ".*.*.");
    std::strcpy(frame[2]+4*i, picture);
    std::strcpy(frame[3]+4*i, ".*.*.");
    std::strcpy(frame[4]+4*i, "..*..");
    frame[0][4*i+5] = prev0;
    frame[1][4*i+5] = prev1;
    frame[2][4*i+5] = prev2;
    frame[3][4*i+5] = prev3;
    frame[4][4*i+5] = prev4;
  }
  for (auto i : frame) std::cout << i << "\n";
  return 0;
}
