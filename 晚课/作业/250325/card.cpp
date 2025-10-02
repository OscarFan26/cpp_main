/*
    By Oscar Fan
    Date: 2025/3/27
    File: card.cpp
*/
#include <bits/stdc++.h>
using namespace std;

bool cards[53];
void turn(int n) {
  if (n > 52) return;
  for (int i = n; i <= 52; i += n) cards[i] = !cards[i];
  turn(++n);
}

int main() {
    freopen("card.in", "r", stdin);
    freopen("card.out", "w", stdout);
  turn(2);
  for (int i = 1; i <= 52; i++) if (!cards[i]) cout << i << ' ';
    fclose(stdin);
    fclose(stdout);
  return 0;
}
