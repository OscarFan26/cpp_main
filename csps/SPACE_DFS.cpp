/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    空间搜索
描述：
      想带你去浪漫的地方旅行……
某某创客空间研制了一款穿越体感器，穿上后可以穿越瞬移到别的空间。例如，你在第5层空间，第5层空间有数字2，即从第5层空
间可以向上或者向下穿越2层，也意味你可以从第5层直达到第3层或者第7层。当然，如果只有6层空间的话，第7层是达到不了的。
如果随机分配到第x层空间，能否通过穿越到达y空间呢？求最少穿越次数。（1<=x<=y<=n,总共有n层空间）
    
输入：
共两行。
第一行三个整数n,x,y
第二行n个整数，表示每层空间可向上向下穿越的层数
    */
    int n, x, y;
    cin >> n >> x >> y;
    int a[n + 1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    queue<int> q;
    q.push(x);
    int ans = 0;
    int st[n + 1];
    memset(st, 0, sizeof st);
    st[x] = 1;
    while (q.size()) {
        int t = q.size();
        while (t--) {
            int t = q.front();
            q.pop();
            if (t == y) {
                cout << ans << endl;
                return 0;
            }
            for (int i = t - a[t]; i <= t + a[t]; i += 2 * a[t]) {
                if (i < 1 || i > n || st[i]) continue;
                st[i] = 1;
                q.push(i);
            }
        }
        ans++;
    }
    cout << -1 << endl;
    return 0;
}
