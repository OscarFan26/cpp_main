// Made By OscarFan
// Date:  7/17/2022 11:24 AM
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
// FILE NAME: an_useless_func.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

string func(int op_code, string targ, int length = 0) {
    if (op_code == 1) return targ.substr(0, length);
    else {
        // 倒序输出
        string res = "";
        for (int i = targ.size() - 1; i >= 0; i--) res += targ[i];
        return res;
    }
}

int main() {
//    无用的函数（字符串操作）
    string str;
    int code;
    cin >> code >> str;
    if (code == 1) { int length; cin >> length; cout << func(code, str, length); }
    else cout << func(code, str);
    return 0;
}