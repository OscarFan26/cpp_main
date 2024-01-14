/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*约瑟夫环*/
    int n, m, k = 0, a[301];
    cin >> n >> m;
    for (int i = 01; i <= n; i++)
        a[i] = 1;
    int sum = n;
    for (int i = 1; sum > 1; i++) {
    if (i == n + 1)
        i = 1;
    if (a[i] == 1) {
        k++; if (k == m) {
            a[i] = 0;
            sum--;
            k = 0;
        }
    }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1)
        cout << i << endl;
    }
    return 0;
    
}
