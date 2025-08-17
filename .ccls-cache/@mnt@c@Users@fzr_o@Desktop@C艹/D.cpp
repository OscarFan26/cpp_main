#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, a, b, cnt = 0;
	cin >> n >> m >> a >> b;
	vector<int> train;
	for (int i = 0; i < m; i++) {
		int l;
		cin >> l;
		for (int j = 0; j < l; j++)  { int x; cin >> x; train.push_back(x); }
		bool find_a = false;
		for (auto i : train) {
			if (i == b && !find_a) break;
			if (i == a) find_a = true;
			if (i == b && find_a) { cnt++; break; }
		}
		train.clear();
	}
	cout << cnt;
	return 0;
}

