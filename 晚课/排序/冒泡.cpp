#include <bits/stdc++.h>
using namespace std;

int main() {
//	freopen("maopao.in", "r", stdin);
//	freopen("maopao.out", "w", stdout);
	int a[10000] = {};
	int n;
	cin >> n;
	int comparisons = 0;
	for (int i = 0; i < n; i++) cin >> a[i];
    int lastswap = 0, k = n-1;
	for (int i = 0; i < n; i++) {
		bool changed = false;
		for (int j = 0; j < k; j++) {
				if (a[j] > a[j+1]) {
					swap(a[j], a[j+1]);
					changed = true;
                    lastswap = j;
				}
				comparisons++;
			}
		if (!changed) break;
		k = lastswap;
	}
	cout << comparisons << "<--\n";
	for (int i = 0; i < n; i++) cout << a[i] << " ";
//	fclose(stdin);
//	fclose(stdout);
	return 0;
}

