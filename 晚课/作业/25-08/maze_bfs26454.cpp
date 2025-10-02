#include <bits/stdc++.h>
using namespace std;

const int maxn = 1001;
int n, m;
int sx, sy, fx, fy;
bool mmap[maxn][maxn];
bool visited[maxn][maxn];
queue<pair<int, int>> q;
pair<int, int> pre[maxn][maxn];
vector<pair<int, int>> path;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool bfs() {
	q.push({sx, sy});
	visited[sx][sy] = true;
	while (!q.empty()) {
		auto p = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int x = p.first + dx[i], y = p.second + dy[i];
			if (x > n || y > m || x < 1 || y < 1 || visited[x][y] || !mmap[x][y]) continue;
			visited[x][y] = true;
			pre[x][y] = p;
			q.push({x, y});
			if (x == fx && y == fy) 
				return true;
		}
	}
	return false;
}

void print(int x, int y) {
	if (x == -1 && y == -1) return;
	path.push_back({x, y});
	print(pre[x][y].first, pre[x][y].second);
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) {
			int x;
			cin >> x;
			if (x == 0) mmap[i][j] = true;
			else mmap[i][j] = false;
		}
	cin >> sx >> sy >> fx >> fy;
	pre[sx][sy] = {-1, -1};
	bool retval = bfs();
	if (retval) {
		print(fx, fy);
		reverse(path.begin(), path.end());
		for (auto i : path) printf("%d,%d\n", i.first, i.second);
	}
	else cout << "no way.";
	return 0;
}

