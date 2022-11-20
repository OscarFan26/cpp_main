/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int origin[n * m + 1] = {};
    int arr[n * m + 1] = {};
    for (int i = 1; i <= n * m; i++)
        cin >> origin[i];
    for (int i = 1; i <= n * m; i++)
    {
        if (origin[i] <= n) {
            arr[i * 2] = origin[i];
        }
        else {
            arr[(origin[i]-n)*2-1] = origin[i];
        }
    }
    for (int i = 1; i <= n * m; i++)
        cout << arr[i] << " ";
    return 0;
}
