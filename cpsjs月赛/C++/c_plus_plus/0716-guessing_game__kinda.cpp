// Made By OscarFan
// Date:  7/16/2022 9:47 AM
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
// FILE NAME: guessing_game__kinda.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 幸运儿
    // 统计每个字母出现的次数,并且输出第一个只出现一次的字母
    int count[26] = {};
    string str;
    cin >> str;
    for (char i : str)
        count[i - 'a']++;
    char target_char[2] = {};
    for (int i = 0; i < 26; i++){
        if (count[i] == 1){
            target_char[0] = i + 'a';
            break;
        }
    }
    for (int i = 0; i < str.size(); i++){
        if (str[i] == target_char[0]){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << "no";
    return 0;
}