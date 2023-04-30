// Created By OscarFan
// TIME:  2023/4/16 09:07:07
// NAME:  优先队列-找前k小.cpp

#include <bits/stdc++.h>
#include <ranges>
using namespace std;

int                                             a[1001][1001];
priority_queue< int, vector< int >, greater<> > q;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) cin >> a[i][j];
        sort(a[i] + 1, a[i] + n + 1);
    }
    for (int i = 1; i <= n; i++) {          // 枚举当前行
        for (int j = 1; j <= n; j++) {      // 枚举当前列
            for (int k = 1; k <= n; k++) {  // 枚举下一行
                q.push(a[i][j] + a[i + 1][k]);
            }
        }  // 计算完毕i, i+1行，将结果保存在i+1行继续向下计算
        for (int k = 1; k <= n; k++) {
            a[i + 1][k] = q.top();
            q.pop();
        }  // cleanup
        while (!q.empty()) { q.pop(); }
    }
    for (int i = 1; i <= n; i++) cout << a[n][i] << " ";
    return 0;
}
