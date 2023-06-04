/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;
#define maxn 100001

struct Edge {
    int u, v, w, next;
} edge[maxn << 1];
int  cnt, head[maxn];
void add(int u, int v, int w) {
    edge[++cnt] = (Edge){ u, v, w, head[u] };
    head[u]     = cnt;
}

int main() { 
    int n, m;
    cin>>n>>m;
    for (int i = 1; i <= m; i++) { int u, v, w;
        cin >> u >> v >> w;
        add(u, v, w);
    }
    return 0;
}
