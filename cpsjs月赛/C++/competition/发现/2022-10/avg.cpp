/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    输入一个长度为n的数组arr，输出数组中比所有元素平均值都小的元素和对应的下标(从1开始)。

    【输入格式】
    第一行有一个正整数n，表示数组长度；
    第二行有n个整数，用空格隔开，表示数组元素

    【输出格式】
    若干行，每行表示符合条件的元素和对应下标

    【数据范围】
    对于100%的数据:1<=n,arr[i]<=10000,下标i从1开始
    */
    int n;
    cin >> n;
    int arr[n] = {};
    for (int i = 0; i < n; i++) cin >> arr[i];
    double avg = accumulate(arr, arr + n, 0) / (double)n;
    for (int i = 0; i < n; i++) if (arr[i] < avg) cout << arr[i] << " " << i + 1 << endl;
    return 0;
}
