/*
    By Oscar Fan
    Date: 2025/4/23
    File: perm.cpp
*/
#include <bits/stdc++.h>
using namespace std;

int n;
int cnt;
string elm;
char ans[502];
int total[502];
char kind[502];
int kinds;

void print() {
  for (int i = 0; i < n; i++) cout << ans[i];
  cout << '\n';
}

void search(int x) {
  if (x == n) {
    print();
    cnt++;
    return;
  }
  for (int i = 0; i < kinds; i++) {
    if (!total[i]) continue;
    total[i]--;
    ans[x] = kind[i];
    search(x + 1);
    ans[x] = ' ';
    total[i]++;
  }
}

int main() {
  freopen("perm.in", "r", stdin);
  freopen("perm.out", "w", stdout);
  cin >> n;
  cin >> elm;
  sort(elm.begin(), elm.end());
  char pre = elm[0];
  kind[0]  = pre;
  kinds++;
  total[0]++;
  for (int i = 1; i < n; i++) {
    if (elm[i] == pre) total[kinds - 1]++;
    else {
      kind[kinds] = elm[i];
      kinds++;
      pre = elm[i];
      total[kinds - 1]++;
    }
  }
  search(0);
  cout << cnt;
  fclose(stdin);
  fclose(stdout);
  return 0;
}
