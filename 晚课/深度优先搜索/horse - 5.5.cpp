#include <bits/stdc++.h>
using namespace std;

int m=9, n=5;
int dx[4] = {1, 2, 2, 1};
int dy[4] = {2, 1, -1, -2};
int x = 1, y = 1;
int fx = 9, fy = 5;

int cnt;
vector<pair<int, int> > route; 

void print() {
	for (int i = 0; i < route.size(); i++) printf("(%d, %d) ", route[i].first, route[i].second);
	cout << '\n';
}

void search(int x, int y) {
	if (x == fx && y == fy) {
		print();
		cnt++;
		return;
	}
	for (int i = 0; i < 4; i++) {
		x += dx[i];
		y += dy[i];
		if (x > m || y > n || x < 1 || y < 1) {
			x -= dx[i];
			y -= dy[i];
			continue;
		}
		route.push_back({x, y});
		search(x, y);
		x -= dx[i];
		y -= dy[i];
		route.pop_back();
 	}
}

int main() {
	search(x, y);
	cout << cnt;
}

