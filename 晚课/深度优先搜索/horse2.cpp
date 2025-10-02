#include <bits/stdc++.h>
using namespace std;

int a[5][5];
int cnt;
int x = 1, y = 1;
int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

void print() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) cout << a[i][j] << " ";
		cout << '\n';
	}
	cout << '\n';
}

void search(int n, int x, int y) {
	if (n == 25) {
		print();
		cnt++;
		return;
	}
	for (int i = 0; i < 8; i++) {
		x += dx[i];
		y += dy[i];
		if (x > 5 || y > 5 || x <= 1 || y <= 1 || a[x][y] != 0) {
			x -= dx[i];
			y -= dy[i];
			continue;
		}
		a[x-1][y-1] = n + 1;
		search(n + 1, x, y);
		a[x-1][y-1] = 0;
		x -= dx[i];
		y -= dy[i];
	}
}

int main() {
	a[0][0] = 1;
	search(0, x, y);
	cout << cnt;
	return 0;
}

