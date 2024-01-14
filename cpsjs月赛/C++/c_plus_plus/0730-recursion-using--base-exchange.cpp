// Made By OscarFan
// Date:  7/30/2022 11:14 AM
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
// FILE NAME: 0730-recusion-using--base-exchange.cpp
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

void exchange(int m, int n) {
    if (!m) return;
    exchange(m / n, n);
    if (m % n >= 10) cout << char(m % n + 'A' - 10);
    else cout << m % n;
}

int main() {
    // 进制转换（将m(10)转化为n进制）
    // 注：用递归
    int m, n;
    cin >> m >> n;
    exchange(m, n);
    return 0;
}