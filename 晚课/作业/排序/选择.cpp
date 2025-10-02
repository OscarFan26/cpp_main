#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("xuanze.in", "r", stdin);
	freopen("xuanze.out", "w", stdout);
	int a[10000] = {};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		int mpos = i;
		int j = 0;
		for (int j = i+1; j < n; j++) if (a[j] < a[mpos]) mpos = j;
		swap(a[i], a[mpos]);
	}
	for (int i = 0; i < n; i++) cout << a[i] << " "; 
	fclose(stdin);
	fclose(stdout);
	return 0;
}
 
