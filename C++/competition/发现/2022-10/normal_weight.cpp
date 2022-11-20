/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
          ----
正常体重(tizhong.cpp)
【题目描述】
    小明身高175，正在减肥和健身，他属于多吃多练型，所以体重浮动比较大；
    若体重在62kg到68kg之间则属于正常，否则属于不正常。
    现给出小明每个月的体重，计算小明保持正常体重的最长月数。

    【输入格式】
    第一行有一个正整数n，表示有几个月；
    第二行有n个正整数t，用空格隔开，表示当前月的体重。

    【输出格式】
    一个数字，表示正常体重最多连续保持了几个月

    【样例输入】
    10
    61 64 65 70 66 63 62 71 69 65
    【样例输出】
    3
    【样例解释】
    正常体重最多连续保持了3个月，分别是 66 63 62

    【数据范围】
    对于100%的数据:1<=n<=10000,50<=t<=100
    */
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] >= 62 && v[i] <= 68) cnt++;
        else cnt = 0;
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    
    return 0;
}
