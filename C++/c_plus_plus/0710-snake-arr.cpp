// Made By OscarFan
// Date:  2022/7/2 下午 09:09
//       _..._
//    .-'_..._''.
//  .' .'      '.\
// / .'
// / .                .-.          .-.
//| |                 | |          | |
//| |             ,---| |---.  ,---| |---.
//. |             `---| |---'  `---| |---'
// \ '.          .    | |          | |
//  '. `._____.-'/    `-'          `-'
//   `-.______ /
//           `
// TYPE:   C++
// FILE NAME: snake-arr.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 蛇形矩阵（输出奇数对角线）
    int n, s = 1;
    cin >> n;
    int arr[n][n] = {};
    for (int i = 1; i <= 2*n-1; i++) {
        // 奇数
        if (i % 2 != 0) {
            for (int line = 0; line < n; line++) {
                for (int row = 0; row < n; row++) {
                    if (line + row == i - 1) arr[line][row] = s++;
                }
            }
        }
        // 偶数
        if (i % 2 == 0) {
            for (int line = n - 1; line >= 0; line--) {
                for (int row = n - 1; row >= 0; row--) {
                    if (line + row == i - 1) arr[line][row] = s++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}