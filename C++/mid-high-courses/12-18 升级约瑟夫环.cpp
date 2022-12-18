/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[301], n, m, k = 0, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x; 
        if (x > 5)
            a[i] = 2;
        else
            a[i] = 3;
    }
    cin >> m;
    int sum = n;
    for (int i = 1; sum > 1; i++) {
        if (i == n + 1)
            i = 1;
        if (a[i] != 0) {
            k++;
            if (k == m) {
                a[i]--;
                if (!a[i])
                    sum--;
                k = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] != 0)
            cout << i << endl;
    }
        return 0;
}
