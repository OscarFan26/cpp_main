#include <bits/stdc++.h>
using namespace std;

char g[101][101];
string k = "!@#$%^&*(";

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n ; i ++)
            cin >> g[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++ ) {
                if (g[i][j] == '.') {
                    for (int l = 0; l < k.length(); l++) {
                        bool fill = true;
                        if (i > 0 && g[i-1][j] == k[l]
                        ||  i < n-1 && g[i+1][j] == k[l]
                        ||  j > 0 && g[i][j-1] == k[l]
                        ||  j < n-1 && g[i][j+1] == k[l])
                            fill = false;
                        if (fill) {
                            g[i][j] = k[l];
                            break;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n; i++){
        for  (int j = 0; j < n; j ++ )
                cout << g[i][j]; cout << endl; }
    }
    return 0;
}
