// Made By OscarFan
// Date:  7/17/2022 9:04 AM
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
// FILE NAME: the_smallest_string.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
//    输入n,再输入n个字符串，求最短的字符串。
    int n;
    string min_str;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (i == 0) {
            min_str = str;
            continue;
        }
        if (str < min_str)
            min_str = str;
    }
    cout << min_str;
    return 0;
}