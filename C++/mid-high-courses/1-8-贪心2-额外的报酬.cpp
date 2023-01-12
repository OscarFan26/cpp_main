/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int tasks[2001], workers[2001];
int match[2001][2001];

int main() {
    /*每一个人只能完成一个工作，每一个人都有级别，只能完成他的级别及以下级别的任务，问是否可以完成所有任务，如果可以，最小成本是什么？*/
    // 输入： 订单量 工人量\n若干数，订单难度\n若干数，工人星级
    int  m, n;
    bool all_match = false;
    cin >> m >> n;
    for (int i = 0; i < m; i++) cin >> tasks[i];
    for (int i = 0; i < n; i++) cin >> workers[i];
    sort(tasks, tasks + m);
    sort(workers, workers + n);
    int cnt = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        if (workers[i] >= tasks[cnt]) {
            sum += workers[i];
            match[cnt][0] = tasks[cnt];
            match[cnt][1] = workers[i];
            cnt++;
        }
        if (cnt == m) {
            all_match = true;
            break;
        }
    }
    if (!all_match)
        cout << "failed";
    else {
        cout << sum << endl;
        for (int i = 0; i < cnt; i++) cout << match[i][0] << " " << match[i][1] << endl;
    }
    return 0;
}
