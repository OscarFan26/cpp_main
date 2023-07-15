#include <bits/stdc++.h>
using namespace std;
int n, m;
int b[1001][1001];
int main() {
    cin >> n >> m;
    while (m--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        b[x1][y1] += 1;
        b[x1][y2 + 1] -= 1;
        b[x2 + 1][y1] -= 1;
        b[x2 + 1][y2 + 1] += 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            b[i][j] = b[i][j] + b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
            cout << b[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
