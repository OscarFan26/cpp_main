/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

/*
题目描述
小明在玩一个 RPG 游戏，他一共打败了 n
 个怪兽，每次打败怪兽能够得到 3
 个道具。一共有 10
 种不同类型的道具，每 2
 个同种类型的道具或者 4
 个任意类型的道具可以升级一次。

请你计算一下，小明最多可以升级几次。

输入
第一行一个整数
。

后续
 行，每行三个整数 a i b i c i
 表示打败怪兽后得到的三个道具的种类。

输出
一个整数，表示小明最多可以升级的次数。
*/

int main() {
  int n, cnt = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0;
  cin >> n;
  int a[999 * 999 ];
  for (int i = 0; i < n*3; i++){
    cin >> a[i] >> a[i++] >> a[i++];
    // i += 2;
  }
  sort(a, a + n * 3);
  for (int i = 0; i < n * 3; i++) {
    int sel = a[i];
    for (int j = i; j < n * 3; j++) {
      if (sel == a[j]) {
        cnt++;
        a[i] = 0;
        a[j] = 0;
        i++;
        break;
      } else {
        // 使四个数之间没有重复的（不一样）
        
      }
    }
  }
  cout << cnt;
  return 0;
}

  return 0;
}
