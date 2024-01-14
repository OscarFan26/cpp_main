// Made By OscarFan
// Date:  7/16/2022 11:18 AM
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
// FILE NAME: first-capital-letter-became-small.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 第一个大写字母变小写
    string str;
    cin >> str;
    bool flag = false;
    for (int i = 0; i < str.size(); i++){
        if (!flag && ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))){
            if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
            flag = true;
        } else if (flag && str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    cout << str;
    return 0;
}