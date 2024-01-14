/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>

using namespace std;

// 测试时输入慢...一...点... 太快会与答案不对

int main() {
    /*
    题目名称：接水活动
    题目描述：学校中一个水房，水房里一共装有m个水龙头，每个水龙头每秒的供水量一样，均为1.现有n名同学接水，他们的初始顺序已经排好。将这些同学按接水顺序1~n编号，i号同学的接水量为wi。接水开始时，1~m号同学各占一个水龙头，并同时打开。当其中某名同学j完成其接水量wj后，下一名排队等候的同学k马上接替。这个换人的过程是瞬间完成的，并不浪费水。即J同学第x秒结束时完成接水，则k同学第x+1秒立刻接水。若当前接水的人数n不足m，则只有n个水龙头供水，其他m-n个水龙头关闭。现在给出n名同学的接水量，问：所有同学都接完水需要多少秒？
    输入描述：第一行，为2个整数n和m，用空格隔开，n为人数，m为水龙头个数。第二行，n个整数，表示每个同学的接水量。
    输出描述：1个正整数，为接水总时间。
    样例输入：
    5 3
    4 4 1 2 1
    样例输出：
    4
    */
    int n, m;
    cin >> n >> m;
    int water[10001] = {};
    for (int i = 1; i <= n; i++) cin >> water[i];

    int ans = 0;
    int t = m + 1;
    while (t <= n + m) {
        for (int i = 1; i <= m; i++) {
            water[i]--;
            if (water[i] == 0) {
                water[i] = water[t];
                t++;
            }
        }
        ans++;
    }
    cout << ans;
    return 0;
}
