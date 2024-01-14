// Made By OscarFan
// Date:  2022/7/2 上午 07:44
//       _..._
//    .-'_..._''.
//  .' .'      '.\
//   .'
//   .                .-.          .-.
//| |                 | |          | |
//| |             ,---| |---.  ,---| |---.
//. |             `---| |---'  `---| |---'
// \ '.          .    | |          | |
//  '. `._____.-'/    `-'          `-'
//   `-.______ /
//           `
// TYPE:   C++
// FILE NAME: count_word.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 统计数组中每个数字的个数（1-50）
    int n;
    cin >> n;
    int arr[50] = {};
    for (int i = 0; i < n; i++){
        int j;
        cin >> j;
        arr[j-1]++;
    }
    for (int i = 0; i < 50; i++)
        if (arr[i]) cout << i+1 << " " << arr[i] << endl;
    return 0;
}