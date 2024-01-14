/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int n, arr[100001], k; 

int partition(int arr[], int start, int end) {
    int i = start, j = end, p = arr[start];
    while (i <= j) {
        while (i<=j&&arr[i]<=p) i++;
        while (i<=j&&arr[j]>p)  j--;
        if (i < j) {
            swap(arr[i], arr[j]);
            i++; j--;
        }
    }
    swap(arr[start], arr[j]);
    return j;
}

int search(int arr[], int n, int k) {
    random_shuffle(arr+1, arr+n+1);
    int t = n - k + 1;
    int start = 1, end = n;
    int mid;
    while (start <= end) {
        mid = partition(arr, start, end);
        if (mid == t) break;
        else if (t < mid) end = mid - 1;
        else start = mid + 1;
    }
    return arr[mid];
}

int main(){
    // 找出数组元素中第K大数字 -- 二分法
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    cin >> k;
    cout << search(arr, n, k) << endl;
    return 0;
}
