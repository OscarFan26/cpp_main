// Made By OscarFan
// Date:  7/10/2022 9:19 AM
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
// FILE NAME: 1.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>
# include <cmath>
using namespace std;

int main() {
    // 进制转换：n, m 将 n 转换为 m 进制
    int n;
    int m;
    cin >> n >> m;
    int pointer = 0;
    string arr[1001];
    while (n) {
        if ((n % m) >= 10) arr[pointer++] = (n % m) + 'A' - 10;
        else arr[pointer++] = n % m + '0';
        n /= m;
    }
    for (int i = pointer - 1; i >= 0; i--)
        cout << arr[i];
    return 0;
}