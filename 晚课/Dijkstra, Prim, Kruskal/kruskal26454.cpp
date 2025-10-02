#include <bits/stdc++.h>
using namespace std;

struct edge {
	int u;
	int v;
	int w;
} edges[200001];

bool cmp(edge x, edge y) {
	return x.w < y.w;
}

int f[200001];

int find(int x) {
	return f[x] ? f[x] = find(f[x]) : x;
}

int Kruskal(int n, int m, edge e[]) {
	memset(f, 0, sizeof f);
	sort(e, e + m, cmp);
	int ans = 0, cnt = 0;
	for (int i = 0; i < m; i++) {
		int x = find(e[i].u), y = find(e[i].v);
		if (x == y) continue;
		f[x] = y;
		ans += e[i].w;
		cnt++;
	}
	return cnt == n - 1 ? ans : -1;
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) f[i] = i;
	for (int i = 0; i < m; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		edges[i].u = u;
		edges[i].v = v;
		edges[i].w = w;
	}
	int ans = Kruskal(n, m, edges);
	if (ans == -1) cout << "orz";
	else cout << ans;
	return 0;
}

