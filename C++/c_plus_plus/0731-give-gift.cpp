// Made By OscarFan
// Date:  7/31/2022 11:49 AM
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
// FILE NAME: 0731-give-gifts.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <iomanip>
# include <vector>
# include <cctype>
# include <ctime>
# include <cmath>
# include <algorithm>

using namespace std;

int main() {
    // 逆推：给礼物
    int m, n, sum = 0;
    cin >> n >> m;

    sum += m;
    for (int i = 0; i < n - 1; i++) {
        sum += 2;
        sum = sum * 2;
    }
    cout << sum;
    return 0;
}