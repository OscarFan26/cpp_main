/*
    By Oscar Fan
    Date: 2024/4/4
    File: 7.4-2.cpp
*/
#include <bits/stdc++.h>

/* 全新方法，但是足足用了48MB的内存？ */


struct node {
  int next[5000];
  int cnt = 0;
} nodes[5001];

int main() {
  int n, m;
  std::cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int u, v;
    std::cin >> u >> v;
    nodes[u-1].next[nodes[u-1].cnt] = v;
    nodes[u-1].cnt++;
    nodes[v-1].next[nodes[v-1].cnt] = u;
    nodes[v-1].cnt++;
  }
  for (int i = 0; i < n; i++) {
    node pnode = nodes[i];
    std::cout << pnode.cnt << " ";
    for (int j = 0; j < pnode.cnt; j++) std::cout << pnode.next[j] << " ";
    std::cout << "\n";
  }
  return 0;
}
