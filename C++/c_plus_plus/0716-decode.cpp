// Made By OscarFan
// Date:  7/16/2022 10:35 AM
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
// FILE NAME: decode.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 解密: 加密过程：1.左移3位 2.大小写翻转 3.倒序存储
    string str, a1;
    cin >> str;
    // 3.倒序存储
    for (int i = str.size() - 1; i >= 0; i--)
        a1 += str[i];
    // 2.大小写翻转
    for (int i = 0; i < str.size(); i++){
        if (str[i] >= 65 && str[i] <= 90){
            a1[i] = str[i] + 32;
        }
        else if (str[i] >= 97 && str[i] <= 122){
            a1[i] = str[i] - 32;
        }
    }
    // 1.左移3位
    for (int outer = 0; outer < 3; outer++) {
        for (int i = 0; i < a1.size(); i++) {
            if (a1[i] == 'z')
                a1[i] = 'a';
            else if (a1[i] == 'Z')
                a1[i] = 'A';
            else a1[i] += 1;
        }
    }
    for (int i = str.size() - 1; i >= 0; i--)
        cout << a1[i];
    return 0;
}