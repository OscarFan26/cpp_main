// Created By OscarFan
// TIME:  2023/6/4 15:51:57
// NAME:  单源最短路.cpp

#include <bits/stdc++.h>

using namespace std;

#define maxn 1000005

struct edge {
    int u, v, w, next;
} edge[maxn * 2];

int n, m, cnt, head[maxn], dis[maxn], vis[maxn];
int start, END;

void add(int u, int v, int w) {
    cnt++;
    edge[cnt].u = u;
    edge[cnt].v = v;
    edge[cnt].w = w;
    edge[cnt].next = head[u];
    head[u] = cnt;
}

struct qnode {
    int v, c;

    bool operator<(const qnode &r) const {
        return c > r.c;
    }
};

void dijkstra() { // 优化
    memset(dis, 0x3f, sizeof(dis));
    dis[start] = 0;
    priority_queue<qnode> q;
    q.push((qnode) {start, 0});
    while (!q.empty()) {
        qnode tmp = q.top();
        q.pop();
        int u = tmp.v;
        if (vis[u]) continue;
        vis[u] = 1;
        for (int i = head[u]; i; i = edge[i].next) {
            int v = edge[i].v;
            int cost = edge[i].w;
            if (dis[v] > dis[u] + cost && vis[v] == 0) {
                dis[v] = dis[u] + cost;
                q.push((qnode) {v, dis[v]});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        add(u, v, w);
        add(v, u, w);
    }
    cin >> start >> END;
    dijkstra();
    cout << dis[END] << endl;
    return 0;
}