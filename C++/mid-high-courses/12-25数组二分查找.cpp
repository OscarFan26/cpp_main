/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int splitSearch(int arr[], int target, int mins, int maxs) {
    int mid = (mins + maxs) / 2;
    if (mins > maxs) // 说明搜查到极限了
        return -1;
    
    if (target < arr[mid])
        splitSearch(arr, target, mins, mid - 1);
    else if (target > arr[mid])
        splitSearch(arr, target, mid + 1, maxs);
    else if (target == arr[mid])
        return mid;
    // 如果搜索不到，返回-1
}

int main(){
    // 数组二分查找
    // 先输入数组长度，然后依次输入数组内容，最后输入查找内容
    // 需要手动 恢复 有序
    int l, target;
    cin >> l;
    int arr[l];
    for (int i = 0; i < l; i++)
        cin >> arr[i];
    cin >> target;
    cout << splitSearch(arr, target, 0, l-1) + 1;

    return 0;
}
