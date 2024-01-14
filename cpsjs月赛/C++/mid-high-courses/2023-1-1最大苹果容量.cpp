/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    // 有一个可以容纳C重量的背包，有n个苹果，求出最大可以容纳几个苹果
    int C, n, cnt = 0;
    cin >> C >> n;
    int arr[999] = {};
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    
    sort(arr, arr+n);
    int present_holds = 0, ptr = 0;
    while (true) {
        if (present_holds > C) break;
        present_holds += arr[ptr];
        ptr++;
        cnt++;
    }
    cout << cnt - 1 << endl;
    return 0;
}
