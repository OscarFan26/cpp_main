//
// Created by Oscar Fan on 2022/3/6.
//
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[101];
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) { cin >> a[i]; }
    // sort第一个参数 数组名+待排序的下标, 第二个参数 抄第一个+待排序的元素个数
    sort(a + 0, a + n);
    for (int i = 0; i < n; i++) { cout << a[i] << " "; }
    return 0;
}