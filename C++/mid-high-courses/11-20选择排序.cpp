/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int arr[10001] = {};

int min_sel(int arr[], int i, int j) {
    int min_index = i;
    for (int k = i + 1; k <= j; k++) if (arr[k] < arr[min_index])
            min_index = k;
    return min_index;
}

void sel_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int min_index = min_sel(arr, i , n);
        if (min_index != i) swap(arr[i], arr[min_index]);
    }
}

int main(){
    // selction sort
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    sel_sort(arr, n);
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    return 0;
}
