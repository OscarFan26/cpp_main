#include <bits/stdc++.h>
using namespace std;

int n, d, v[100001], a[100001];

int main() {
	freopen("road.in", "r", stdin);
	freopen("road.out", "w", stdout);
	cin >> n >> d;
	for (int i = 0; i < n-1; i++) cin >> v[i];
	for (int i = 0; i < n; i++) cin >> a[i];
	long long p = 0, mm = a[0];
	double s = 0;
	for (int i = 1; i < n; i++) {
		s -= v[i-1];
		if (a[i] >= mm && i != n-1) continue;
		double l = ceil(-s/d);	
		p += (int)l * mm;
		s += l * d;
		mm = a[i];
	} 
	cout << (long long)p;
	fclose(stdin); fclose(stdout);
	return 0;
}

