#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("maopao.in", "r", stdin);
  freopen("maopao.out", "w", stdout);
  int arr[10] = {3, 0, 1, 8, 7, 2, 5, 4, 6, 9};
  for (int i = 1; i < 10; i++) {
    bool flag = false;
    for (int j = 0; j < 10 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        flag = true;
      }
    }
    if (!flag) break;
  }
  for (int i = 0; i < 10; i++) cout << arr[i] << " ";
  fclose(stdin);
  fclose(stdout);
  return 0;
}
