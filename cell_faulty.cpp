#include <bits/stdc++.h>
using namespace std;

const int maxn = 1001;
int n, m;
int arr[maxn][maxn];
queue<pair<int, int> > h;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int cnt;

int bfs(int x, int y) {
	cnt++;
	h.push({x, y});
	while (!h.empty()) {
		auto p = h.front();
		x = p.first, y = p.second;
		h.pop();
		for (int t = 0; t < 4; t++) {
			int xx = x + dx[t], yy = y + dy[t];
			if (xx == n || xx == -1 || yy == n || yy == -1 || !arr[xx][yy]) continue;
			h.push({xx, yy});
			arr[xx][yy] = false;
		}
	}
}

int main() {
	freopen("cell.in", "r", stdin);
	freopen("cell.out", "w", stdout); 
	cin >> n >> m;
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
		char x;
		cin >> x;
		if (x == '0') arr[i][j] = 0;
		else arr[i][j] = 1;
	}
	for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) if (arr[i][j]) bfs(i, j);
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
}

