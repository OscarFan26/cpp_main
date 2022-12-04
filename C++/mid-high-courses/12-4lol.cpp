/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;
int ans = 0, st[5000001], n, top = 1, a;
int main()
{
    cin >> n >> st[1];
    for (int i = 2; i <= n; i++) {
        cin >> a;
        if (a < st[top]) { top++; ans++;
            st[top] = a;
        }
        else {
            int r = top;
            while (r != 1 && st[r] <= a)
                r--;
            ans += top - r + 1;
            while (top > 0 && st[top] < a)
                top--;
            top++;
            st[top] = a;
        }
    }
    cout << ans << endl;
    return 0;
}
