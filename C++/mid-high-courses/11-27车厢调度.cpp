/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int a[1001], s[1001];
int top, n;

int main(){
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    top = 0;
    for (int i = 1, cur = 1; i <= n; i++)
    {
        while (cur <= a[i])
            s[++top] = cur++;
        if (s[top] == a[i])
            --top;
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
