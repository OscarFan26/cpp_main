/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    // 后序遍历 => 分层输出整个BST
    /*
    6
    1 3 6 8 7 5

    =>

    3
    5
    3 7
    1 6 8
    */
    
    // 后序遍历
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int root = arr[n - 1];
    int left = 0;
    int right = n - 2;
    while (left < right) {
        while (arr[left] < root) left++;
        while (arr[right] > root) right--;
        if (left < right) swap(arr[left], arr[right]);
    }
    int left_root = arr[left];
    int right_root = arr[left + 1];
    int left_left = 0;
    int left_right = left - 1;
    int right_left = left + 1;
    int right_right = n - 2;
    while (left_left < left_right) {
        while (arr[left_left] < left_root) left_left++;
        while (arr[left_right] > left_root) left_right--;
        if (left_left < left_right) swap(arr[left_left], arr[left_right]);
    }
    while (right_left < right_right) {
        while (arr[right_left] < right_root) right_left++;
        while (arr[right_right] > right_root) right_right--;
        if (right_left < right_right) swap(arr[right_left], arr[right_right]);
    }
    cout << left_root << endl;
    cout << right_root << endl;
    cout << left_root << " " << right_root << endl;
    cout << arr[0] << " " << arr[left + 1] << " " << arr[n - 1] << endl;
    return 0;
}
