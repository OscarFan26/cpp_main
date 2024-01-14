// Made By OscarFan
// Date:  7/24/2022 9:13 AM
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
// FILE NAME: book.cpp
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
    freopen("book.in", "r", stdin);
    freopen("book.out", "w", stdout);
    // 2. 小明读书（book.cpp）
    //【问题描述】
    //小明一向是一个倒霉又聪明的XXX，今天她坐在一颗苹果树下读书，由于她很倒霉所以不断有
    //很多苹果从树上掉到她的头上，同时又有损友向她扔苹果。现在她数出了一共有 n 个苹果掉
    //到了地上，并且为每个苹果编上了一个字母，并对它们按字典序排序，但是她不知道损友扔给
    //她的苹果应该插入在哪里，现在请你帮帮她吧。
    //【输入文件】
    //文件名：book.in
    //第一行有一个 n，代表树上掉下来了 n 个苹果。
    //第二行有 n 个小写字母，代表从树上掉下来苹果的编号。
    //第三行只有一个小写字母，代表朋友扔给她的那一个。
    //【输出文件】
    //文件名：book.out
    //一个字符串长度为 n+1，代表插入苹果后的序列。
    // 这真的是老师能编得出来的吗question mark
    int n;
    cin >> n;
    vector<char> before;
    for (int i = 0; i < n; i++) {
        char a;
        cin >> a;
        before.push_back(a);
    }
    char add;
    cin >> add;
    before.push_back(add);
    sort(before.begin(), before.end());
    for (char i : before) {
        cout << i;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}