/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    // 输入n,有n堆苹果，输入每个堆的苹果数
    // 规定第1堆只能向第2堆移动，第n堆只能向第n-1堆移动，其他堆可以向左或向右移动
    // 求出最少移动多少次，可以使得所有堆的苹果数相等
    int n;
    cin >> n;
    int arr[9999] = {};
    for (int i = 0; i < n; i++) cin >> arr[i];
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    // 只能向相邻的堆移动
    int avg = sum / n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            arr[i+1] += arr[i] - avg;
            cnt++;
        }
        if (arr[i] < avg) {
            arr[i-1] += avg - arr[i];
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

