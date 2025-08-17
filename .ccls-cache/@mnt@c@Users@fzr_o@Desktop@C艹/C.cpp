#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 0, b = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) { int x; cin >> x; a += x; }
	for (int i = 0; i < n; i++) { int x; cin >> x; b += x; }
	cout << int(ceil((a+b)/2.0));
	return 0;
}

