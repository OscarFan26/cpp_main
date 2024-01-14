/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;



int main(){
    // 归并排序
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    vector<int> c(n + m);
    merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
    for (int i = 0; i < n + m; i++) cout << c[i] << " ";
    return 0;
}
