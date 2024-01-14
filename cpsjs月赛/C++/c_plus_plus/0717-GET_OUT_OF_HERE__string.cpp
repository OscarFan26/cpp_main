// Made By OscarFan
// Date:  7/17/2022 11:47 AM
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
// FILE NAME: GET_OUT_OF_HERE__string.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

string func(string targ_str, char op_string){
    if ((op_string >= 'A' && op_string <= 'Z') || (op_string >= 'a' && op_string <= 'z')){
        // 删除所有字符串中的op_string
        for (int i = 0; i < targ_str.size(); i++)
            if (targ_str[i] == op_string)
                targ_str.erase(i, 1);

        return targ_str;
    } else {
        // 删除所有空格
        for (int i = 0; i < targ_str.size(); i++)
            if (targ_str[i] == ' ')
                targ_str.erase(i, 1);
        return targ_str;
    }
}

int main() {
    // 踢出字符（如果是字字母，那就踢出那个字母，不是字母就删除空格）
    string str;
    char op[2];
    getline(cin, str);
    cin >> op;
    cout << func(str, op[0]);
    return 0;
}