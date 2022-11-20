// Made By OscarFan
// Date:  7/16/2022 11:42 AM
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
// FILE NAME: longest_pattern.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 最长宝石串(*表示首尾，#为宝石，@为珍珠)输出最长的宝石串的长度
    string str;
    cin >> str;
    int max_len = 0;
    int len = 0;
    for (int i = 0; i < str.size(); i++){
        if (str[i] == '#') {
            len++;
            if (len > max_len)
                max_len = len;
        }
        else if (str[i] == '@'){
            len = 0;
        }
    }
    cout << max_len;
    return 0;
}