/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;
int q[1000001];

void jisuan(int ji, int n) {
    q[1] = ji;
    int rear = 2, two = 1, three = 1;
    while (rear <= n) {
        int t1 = q[two] * 2 + 1;
        int t2 = q[three] * 3 + 1;
        int t = min(t1, t2);
        if (t1 < t2)
            two++;
        else
            three++;
        if (t == q[rear-1])
            continue;
        q[rear] = t;
        rear++;
    }
    cout << q[n] << endl;
}

int main()
{
    int ji, n;
    while (cin >> ji >> n)
        jisuan(ji, n);
    return 0;
}
