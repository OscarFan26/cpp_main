/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int main() {
    //       长L米，宽M米的草坪里装有n个浇灌喷头。每个喷头都装在草坪中心线上（离两边各r米）。我们知道每个喷头的位置（离草坪中心线左端的距离），以及它能覆盖到的浇灌范围。请问：如果要同时浇灌整块草坪，最少需要打开多少个喷头？
    //  输入包含若干组测试数据。第一行一个整数 T表示数据组数；每组数据的第一行是整数
    //n、L 和 W；接下来的 n 行，每行包含两个整数，给出一个喷头的位置和浇灌半径。
    //      对每组测试数据输出一个数字，表示要浇灌整块草坪所需喷头数目的最小值。如果所有喷头都打开也不能浇灌整块草坪，则输出 −1。
    int  m;
    int n, s, a[10000];
    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = 0, sum = a[0], ans = n + 1;
    while (r < n) {
        if (sum < s) {
            sum += a[++r];
        } else {
            ans = min(ans, r - l + 1);
            sum -= a[l++];
        }
    }
    cout << (ans == n + 1 ? -1 : ans);
    return 0;
    
}
