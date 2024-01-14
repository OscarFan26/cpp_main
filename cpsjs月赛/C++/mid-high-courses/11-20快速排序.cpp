/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int arr[10001];

void fast_sort(int arr[], int l, int r) {
    if (l >= r)
        return;
    int i = l, j = r, x = arr[l];
    while (i < j)
    {
        while (i < j && arr[j] >= x)
            j--;
        if (i < j)
            arr[i++] = arr[j];
        while (i < j && arr[i] < x)
            i++;
        if (i < j)
            arr[j--] = arr[i];
    }
    arr[i] = x;
    fast_sort(arr, l, i - 1);
    fast_sort(arr, i + 1, r);
}

int main(){
    // 快速排序算法
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    fast_sort(arr, 1, n);
    for (int i = 1; i <= n; i++) cout << arr[i] << " ";
    return 0;
}
