// Made By OscarFan
// Date:  7/16/2022 9:31 AM
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
// FILE NAME: letters_became_capitalize.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 小写字母变大写字母
    string str;
    getline(cin, str);
    for (char & i : str)
        if (i >= 'a' && i <= 'z')
            i = i - 32;
    cout << str;
    return 0;
}