/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

map<string, bool> m;
int               cnt[400000], head, tail = 1;
string            aim = "123804765";

int nextpos(int pos, int i) {
    switch (i) {
    case 1:
        if (pos - 3 >= 0) return pos - 3;
    case 2:
        if (pos + 3 <= 8) return pos + 3;
    case 3:
        if (pos % 3 != 0) return pos - 1;
    case 4:
        if (pos % 3 != 2) return pos + 1;
    default:
        return -1;
    }
}

void bfs(string s) {
    if (s == aim) {
        cout << "0";
        return;
    }
    queue<string> q;
    q.push(s);
    bool flag = false;
    while (!q.empty() && !flag) {
        string now = q.front();
        q.pop();
        int pos = now.find("0");
        for (int i = 1; i <= 4; i++) {
            int to = nextpos(pos, i);
            if (to == -1) continue;
            swap(now[pos], now[to]);
            if (!m[now]) {
                if (now == aim) {
                    cout << cnt[head] + 1;
                    flag = 1;
                    break;
                }
                cnt[tail++] = cnt[head] + 1;
                q.push(now);
                m[now] = 1;
            }
            swap(now[pos], now[to]);
        }
        head++;
    }
}

int main() { 
    string s; cin >> s;
    bfs(s);
    return 0;
}
