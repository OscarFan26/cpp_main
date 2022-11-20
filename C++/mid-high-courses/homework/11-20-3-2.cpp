/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    乱序数组的逆序对
    【题目描述】
    给定长度为N的数组，数组全体都是乱序的，请求出数组的逆序对数。

    输入：
    第一行有1个数字N，表示数组长度N，1<=mid<N<=100000。第二行有N个数字，用空格隔开
    输出:
    逆序对数，单独占一行

    【样例输入1】:
    4
    2 4 3 1
    【样例输出1】:
    4

    【样例输入2】:
    8
    60 71 49 11 82 49 3 66
    【样例输出2】:
    16

    【提示】
    可以先尝试暴力解法，然后再慢慢优化
    */
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) for (int j = i + 1; j < n; j++) if (nums[i] > nums[j]) count++;
    
    cout << count << endl;

    return 0;
}
