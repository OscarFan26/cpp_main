// Made By OscarFan
// Date:  7/24/2022 9:01 AM
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
// FILE NAME: fanxiang.cpp
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

int main() {
    freopen("fanxiang.in", "r", stdin);
    freopen("fanxiang.out", "w", stdout);
    // 【问题描述】
    //输入一串内容（长度不超过 100），反向输出并且最后一个字符输出一遍，倒数第二个字母
    //输出 2 遍，倒数第三个字母输出 3 遍，依次向前。
    //【输入文件】
    //文件名：fanxiang.in
    //一行，包括一个字符串。（不包含空格，长度不过 100）
    //【输出文件】
    //文件名：fanxiang.out
    //反向输出这个字符串。
    // 思路：反向存储在按照规则输出
    vector<char> vec;
    string s;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--) {
        vec.push_back(s[i]);
    }
    int times = 1;
    for (char c : vec) {
        for (int i = 0; i < times; i++)
            cout << c;
        times++;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}