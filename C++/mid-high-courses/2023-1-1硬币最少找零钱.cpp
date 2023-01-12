/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int value[999] = {};
    for (int i = 0; i < m; i++)
        cin >> value[i];
    sort(value, value + m, greater<int>());
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        while (n >= value[i]) {
            n -= value[i];
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
