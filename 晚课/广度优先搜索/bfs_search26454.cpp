#include <bits/stdc++.h>
using namespace std;

const int maxn = 101;
int n, m;
vector<int> path;
vector<int> path_ans;
int path_len = INT_MAX;
queue<int> q;
bool visited[maxn];
vector<vector<int> > nxt(maxn);

bool bfs() {
	bool found = false;
	path.push_back(1);
	visited[1] = true;
	q.push(1);
	while (!q.empty()) {
		int u = q.front();
		q.pop();
		path.push_back(u);
		for (int i = 0; i < nxt[u].size(); i++) {
			int v = nxt[u][i];
			if (visited[v]) continue;
			if (v != n) visited[v] = true;
			q.push(v);
			if (v == n) {
				found = true;
				path.push_back(v);
				if (path_len > path.size()) {
					path_ans = path;
					path_len = path.size();
				}
				path.pop_back();
			}
			
		}
		path.pop_back();
	}
	return found;
}

int main() {
	cin >> n >> m;	
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		nxt[u].push_back(v);
		nxt[v].push_back(u);
	}
	bool found = bfs();
	if (!found) 
		cout << "Not found!\n";
	else 
		for (int i = 0; i < path_len; i++) cout << path_ans[i] << " ";
	return 0;
}

