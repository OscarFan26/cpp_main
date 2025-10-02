#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("tower.in", "r", stdin);
	freopen("tower.out", "w", stdout);
	int n;
	cin >> n;
	int arr[101][101];
	for (int i = 1; i <= n; i++) for (int j = 1; j <= i; j++) cin >> arr[i][j];
	int dp[101][101];
	for (int i = 1; i <= n; i++) dp[n][i] = arr[n][i];
	for (int i = n - 1; i >= 1; i--) for (int j = 1; j <= i; j++) dp[i][j] = arr[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]);
	cout << "max=" << dp[1][1];
	fclose(stdin);
	fclose(stdout);
	return 0;
}

