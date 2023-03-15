/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int n;
int a[101], b[101];

void dfs(int x) {
    for (int i = 1; i <= n; i++) {
        if (b[i] == 1) continue;
        a[x] = i;
        b[i] = 1;
        for (int i = 1; i <= x; i++) cout << a[i];
        cout << endl;
        dfs(x + 1);
        a[x] = 0;
        b[i] = 0;
    }
}


int main() {
    // n数全排列去重
    cin >> n;
    dfs(1);
    return 0;
}
