#include <bits/stdc++.h>
using namespace std;

double a, b, c, d;

double f(double x) {
	return a * x * x * x + b * x * x + c * x + d;
}

int main() {
	cin >> a >> b >> c >> d;
	for (double x = -100.0; x <= 100.0; x += 1.0) {
		if (f(x) == 0) cout << fixed << setprecision(2) << x;
		else if (f(x) * (x + 1) > 0) continue;
		else {
			int mid = (x + x + 1) / 2;
			int l = x, r = x + 1;
			while (r - l > 0.001) { 
				if (f(l) * f(r) <= 0) r = mid;
				else l = mid;
				mid = (x + x + 1) / 2;
			}
			cout << fixed << setprecision(2) << l << " ";
		}
	}
	return 0;
}

