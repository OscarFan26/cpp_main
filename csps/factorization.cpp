/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int a[1001];
int sum = 1, n;

void dfs(int x) {
    if (x == 1) {
        a[sum] = 1;
        cout << n << "=";
        for (int i = 1; i < sum; i++) cout << a[i] << "*";
        cout << a[sum] << endl;
        return;
    }
    for (int i = x; i > 1; i--) {
        if (x % i == 0) {
            a[sum++] = i;
            dfs(x / i);
            sum--;
        }
    }
}

int main() {
    // 因式分解   
    cin >> n;
    dfs(n);
    return 0;
}
