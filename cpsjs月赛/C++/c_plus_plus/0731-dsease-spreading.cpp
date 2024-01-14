// Made By OscarFan
// Date:  7/31/2022 10:32 AM
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
// FILE NAME: 0731-disease-spreading.cpp
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
    int n, m;  // n -> 一天能传染的人数  m -> 已经传染了几天
    cin >> n >> m;
    int sum = 1;
    for (int i = 0; i < m; i++) sum = sum * n + sum;
    cout << sum;
    return 0;
}