/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

/*
    小明有
 根木棍，第
 根木棍的长度为
。现在想要切出
 根长度一样的木棍，每一根最长是多少呢？

输入
第一行一个整数
。

第二行
 个整数
。

第三行一个整数
，表示询问的次数。

第四行
 个整数
。

输出
输出
 行，第
 行一个实数，表示要切出
 根长度一样的木棍，每一根木棍最长的长度。相对误差或绝对误差不超过 10^-9
 就算正确。
*/

int main() {
  freopen("stick.in", "r", stdin);
  freopen("stick.out", "w", stdout);
  int n, m;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  cin >> m;
  int b[m];
  for (int i = 0; i < m; i++) cin >> b[i];
  sort(a, a + n);
  for (int i = 0; i < m; i++) {
    double l = 0, r = a[n - 1], mid;
    while (r - l > 1e-9) {
      mid = (l + r) / 2;
      int cnt = 0;
      for (int j = 0; j < n; j++) cnt += a[j] / mid;
      if (cnt >= b[i])
        l = mid;
      else
        r = mid;
    }
    cout << fixed << setprecision(10) << l << "\n";
  }
  fclose(stdin);
  fclose(stdout);
  return 0;
}
