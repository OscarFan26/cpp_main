#include <bits/stdc++.h>
using namespace std;

int main() {
//	freopen("Fibonacci.in", "r", stdin);
//	freopen("Fibonacci.out", "w", stdout);
	unsigned long long a[101] = {INT_MIN, 1, 1};
	int n;
	cin >> n;
	for (int i = 3; i <= n; i++) a[i] = a[i-1] + a[i-2];
	cout << a[n];
//	fclose(stdin);
//	fclose(stdout);
	return 0;
}

