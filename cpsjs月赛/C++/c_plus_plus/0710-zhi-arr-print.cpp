// Made By OscarFan
// Date:  2022/7/2 下午 09:27
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
// FILE NAME: zhi-arr-print.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 之字形矩阵
    int n = 0, s = 1;
    cin >> n;
    int arr[999][999] = {};
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) arr[i][j] = s++; }
        else {
            for (int j = n - 1; j >= 0; j--) arr[i][j] = s++; }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}