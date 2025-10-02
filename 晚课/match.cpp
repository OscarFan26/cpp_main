#include <bits/stdc++.h>
using namespace std;

int m;
int n;
int half;
int a[1025][1025];

void draw(int x, int y, int h, int num) {
	if (h == 0) {
		a[x][y] = num;
		return;
	}
	draw(x, y, h - 1, num);
	draw(x + pow(2, h-1), y + pow(2, h-1), h - 1, num);
	draw(x, y + pow(2, h-1), h-1, num + pow(2, h-1));
	draw(x + pow(2, h-1), y, h - 1, num + pow(2, h-1));
}
int main() {
//	freopen("match.in", "r", stdin);
//	freopen("match.out", "w", stdout);
	cin >> m;
	n = pow(2, m);
	draw(0, 0, n, 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cout << a[i][j] << " ";
		cout << "\n";
	}
//	fclose(stdin);
//	fclose(stdout);
	return 0;
}

