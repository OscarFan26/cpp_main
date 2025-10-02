#include <bits/stdc++.h>
using namespace std;

const int maxn = 1001;
int n, m;
int sx, sy, fx, fy;
bool mmap[maxn][maxn];
bool visited[maxn][maxn];
bool found = false;
vector<pair<int, int>> path;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool dfs(int x, int y) {
	if (x == fx && y == fy) {
		found = true;
	}
	for (int i = 0; i < 4; i++) {
		int xx = x + dx[i], yy = y + dy[i];
		if (xx > n || yy > n || xx < 1 || yy < 1 || visited[xx][yy] || !mmap[xx][yy]) continue; 
		visited[xx][yy] = true;
		path.push_back({xx, yy});
		bool retval = dfs(xx, yy);
		if (retval) return true;
		visited[xx][yy] = false;
		path.pop_back();
	}
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
	path.push_back({sx, sy});
	bool retval = dfs(sx, sy);
	if (found) for (auto i : path) printf("%d,%d\n", i.first, i.second);
	else cout << "no way.";
	return 0;
}

