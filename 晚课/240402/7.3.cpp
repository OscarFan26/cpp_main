/*
    By Oscar Fan
    Date: 2024/4/4
    File: 7.3.cpp
*/
#include <bits/stdc++.h>

struct node {
  int data;
  int rank;
  int index;
};

int main() {
  int n;
  std::cin >> n;
  node nodes[n];

  for (int i = 0; i < n; i++) {
    std::cin >> nodes[i].data;
    nodes[i].index = i;
  }

  std::sort(nodes, nodes + n,
            [](const node &x, const node &y) { return x.data < y.data; });

  for (int i = 0; i < n; i++) nodes[i].rank = i + 1;

  std::sort(nodes, nodes + n, [](const node &x, const node &y) { return x.index < y.index; });

  for (auto& x : nodes) std::cout << x.rank << " ";

  return 0;
}
