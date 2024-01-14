// Made By OscarFan
// Date:  2022/7/2 下午 09:21
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
// FILE NAME: particular-arr.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 通过特定的公式求arr C的值
    int arr_a[2][2] = {}, arr_b[2][2] = {}, arr_c[2][2] = {};
    for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) cin >> arr_a[i][j];
    for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++) cin >> arr_b[i][j];
    for (int i = 0; i < 2; i++) for (int j = 0; j < 2; j++)
        arr_c[i][j] = arr_a[i][0] * arr_b[0][j] + arr_a[i][1] * arr_b[1][j];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) cout << arr_c[i][j] << " ";
        cout << endl;
    }
    return 0;
}