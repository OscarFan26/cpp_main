#include <bits/stdc++.h>
using namespace std;

int main() {
	int wa, ca, ta, wb, cb, tb;
	cin >> wa >> ca >> ta >> wb >> cb >> tb;
	if (wa != wb) cout << (wa > wb ? "A" : "B");
	else if (ca != cb) cout << (ca > cb ? "A" : "B");
	else cout << (ta < tb ? "A" : "B");
	return 0;
}

