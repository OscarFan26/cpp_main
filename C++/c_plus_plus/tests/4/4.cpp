// Made By OscarFan
// Date:  7/10/2022 9:54 AM
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
// FILE NAME: 4.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 排列组合：鲜花速递：红7 黄6 粉5
    // 给出 零花钱， 如至少要一种排列组合，输出组合数量， 不然输出NO
    int money, request;
    cin >> money >> request;
    int count = 0;
    for (int i = 0; i <= request; i++) {
        for (int j = 0; j <= request; j++) {
            for (int k = 0; k <= request; k++) {
                if (i + j + k == request && i * 7 + j * 6 + k * 5 <= money) count++;
            }
        }
    }
    if (!count) cout << "NO";
    else cout << count;
    return 0;
}