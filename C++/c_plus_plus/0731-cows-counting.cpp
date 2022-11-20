// Made By OscarFan
// Date:  7/31/2022 9:56 AM
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
// FILE NAME: 0731-cows-counting.cpp
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

int cows(int n) {
    if (n < 4) return 1;
    return cows(n - 1) + cows(n - 3);
}

int main() {
    // 假设一头牛每年春季生一头后代牛，一头小牛要等4岁才能继续生牛,问n年后，有多少后代牛？
    int n = 0;
    cin >> n;
    cout << cows(n + 2) - 1<< endl;
    return 0;
}