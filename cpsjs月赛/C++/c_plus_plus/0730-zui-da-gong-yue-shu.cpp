// Made By OscarFan
// Date:  7/30/2022 11:45 AM
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
// FILE NAME: 0730-zui-da-gong-yue-shu.cpp
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
    // 最大公约数
    int m, n;
    cin >> m >> n;
    int r = m % n;
    while (r) {
        m = n;
        n = r;
        r = m % n;
    }
    cout << n;
    return 0;
}