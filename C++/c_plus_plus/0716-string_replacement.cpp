// Made By OscarFan
// Date:  7/16/2022 9:09 AM
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
// FILE NAME: string_replacement.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 字符串替换
    //    先给出一段字符串
    // 然后给出一个目标替换字符串和替换字符串
    string str, targ, sub;
    cin >> str;
    cin >> targ >> sub;
    for (unsigned long long i = 0; i < str.size(); i++) {
        if (str.substr(i, targ.size()) == targ) {
            str.replace(i, targ.size(), sub);
            i += sub.size() - 1;
        }
    }
    cout << str << endl;
    return 0;
}