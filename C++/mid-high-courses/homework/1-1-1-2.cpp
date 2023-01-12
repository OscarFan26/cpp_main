#include <bits/stdc++.h>
using namespace std;

int main() {
  /*
    题目名称：小俊放书
    题目描述：小俊同学有个书架，他有很多书，以至于书架很快就满了，只剩下最顶层有空余。小俊还有N本书（N>=1
    and N<=20000）,每本书有自己的厚度Hi(Hi>=1 and
    Hi<=10000),N本书总厚度为S，书架高度为B(1<=B<=S<2000000).为了到达书架顶层，小俊可以踩着其他书籍，已知书籍的总高度不低于书架高度，当然如果书籍数量越多越危险。为了帮小俊到达书架的顶层，找出使用书籍数目最少的解决方案。
    输入描述：第一行：空格隔开的N和B 。第二行N个整数，分别表示每本书籍的厚度Hi。
    输出描述：能达到书架高度所使用的最少书籍数。

    样例输入：
    6 40
    6 18 11 13 19 11
    样例输出：
    3
  */
  int n, b;
  cin >> n >> b;
  int heights[100001] = {};
  for (int i = 0; i < n; i++) {
    cin >> heights[i];
  }
  int cnt = 0;
  sort(heights, heights + n);
  int present_use = 0, ptr = 0;
  while (true) {
    if (b <= present_use)
      break;
    present_use += heights[ptr];
    if (b <= present_use)
      break;
    ptr++;
    cnt++;
  }
  cout << cnt;
  return 0;
}
