#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("mcss.in", "r", stdin);
	freopen("mcss.out", "w", stdout);
	long long x;
	long long arr[1001] = {};
	long long dp[1001] = {};
	int j = 0;
	while (cin >> x) {
		arr[j++] = x;
	}
	dp[0] = arr[0];
	for (int i = 1; i <= j; i++) dp[i] = max(arr[i], arr[i] + dp[i - 1])
	long long maxn = INT_MIN;
	for (int i = 0; i <= j; i++) if (maxn < dp[i]) maxn = dp[i];
	cout << maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

