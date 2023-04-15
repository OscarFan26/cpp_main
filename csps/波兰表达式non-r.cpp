/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[1001][1001];int s=1,p=0;
    double a[1001];
    while (cin>>str[s]) s++;
    s--;
    for (int i = s; i >=1; i--) {
        if (strcmp(str[i], "+") == 0) {
            a[p-1] = a[p] + a[p-1];
            a[p] = 0;
            p--;
        }
        else if (strcmp(str[i], "-") == 0) {
            a[p - 1] = a[p] - a[p - 1];
            a[p]     = 0;
            p--;
        } else if (strcmp(str[i], "*") == 0) {
            a[p-1] = a[p] * a[p-1];
            a[p] = 0;
            p--;
        }
        else if (strcmp(str[i], "/") == 0) {
            a[p - 1] = a[p] / a[p - 1];
            a[p]     = 0;
            p--;
        } else a[++p] = atof(str[i]);
    }
    cout << a[1];
    return 0;
}
