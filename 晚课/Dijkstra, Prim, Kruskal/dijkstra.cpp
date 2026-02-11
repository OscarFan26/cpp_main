#include <bits/stdc++.h>
using namespace std;

const int maxn = 10001;
int n, m, s;
int arr[maxn][maxn];
int dis[maxn];
bool tagged[maxn];

void dijkstra() {
	tagged[s] = true;
	for (int i = 1; i <= n; i++) dis[i] = arr[s][i];
	for (int t = 1; t <= n; t++) {
		int mini, minn = INT_MAX;
		for (int j = 1; j <= n; j++) if (!tagged[j] && dis[j] < minn) { minn = dis[j]; mini = j; }
		tagged[mini] = true;
		for (int i = 1; i <= n; i++) if (dis[i] > minn + arr[mini][i]) dis[i] = dis[mini] + arr[mini][i];
	}
}

int main() {
	memset(arr, 0x3f3f3f3f, sizeof arr);
	for (int i = 1; i <= n; i++) for (int j = 1; j <= n; j++) arr[i][j] = 0;
	cin >> n >> m >> s;
	for (int i = 0; i < m; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		arr[u][v] = w;
	}
	dijkstra();
	for (int i = 1; i <= n; i++) cout << dis[i] << " ";
	return 0;
}

