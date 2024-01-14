//
// Created by Oscar Fan on 2022/3/6.
//
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) { return a>b; }

int main(){
    // 注意注意！！ 该程序使用与任何无序数组！！
    // 具体资料，借鉴网上！
    int n, arr[51] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) { cin >> arr[i]; }
    sort(arr+0, arr+50, compare);
    for (int i = 0; i < n; i++) { cout << arr[i] << " "; }
    return 0;
}
