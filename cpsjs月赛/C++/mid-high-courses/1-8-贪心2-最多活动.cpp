/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

struct activity {
    int start;
    int end;
};

bool cmp(const activity a, const activity b) { return (a.end == b.end) ? a.start > b.start : a.end < b.end; }

int main() {
    // 有n个活动，活动不能有重叠，问最多可以安排多少活动
    int n, cnt = 1;
    cin >> n;
    activity actvy[10001];
    for (int i = 0; i < n; i++) cin >> actvy[i].start >> actvy[i].end;
    sort(actvy, actvy + n, cmp);
    int last = actvy[0].end;
    for (int i = 1; i < n; i++) {
        if (actvy[i].start >= last) {
            cnt++;
            last = actvy[i].end;
        }
    }
    cout << cnt;
    return 0;
}
