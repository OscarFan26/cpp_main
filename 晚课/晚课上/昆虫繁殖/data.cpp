#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("a.in", "r", stdin);
	freopen("a.out", "w", stdout);
	long long a[101] = {}, b[101] = {}, x, y, z;
	cin >> x >> y >> z;
	for (int i = 1; i <= x; i++) {
		a[i] = 1;
		b[i] = 0;
	}
	for (int i = x + 1; i <= z+1; i++) {
		b[i] = y*a[i-x];
		a[i] = a[i-1] + b[i-2];
	}
	cout << a[z+1];
	fclose(stdin);
	fclose(stdout);
	return 0;
}

