// Made By OscarFan
// Date:  7/24/2022 9:39 AM
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
// FILE NAME: cunzhang.cpp
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

struct elector {
    int    votes;
    int    id;
};

bool compare(elector a, elector b) {
    return a.votes > b.votes;
}

int main() {
    freopen("cunzhang.in", "r", stdin);
    freopen("cunzhang.out", "w", stdout);
    // 4. 选村长（cunzhang.cpp）
    //【问题描述】
    //青青草原的羊村村长换届，现有三位候选羊：喜羊羊，懒羊羊和美羊羊，他们的编号分别
    //为 1、2、3，另有 n 位投票羊进行投票，请将投票后的三位候选羊，按照票数降序排列，若票
    //数相同，则编号小的靠前。
    //提示： 使用结构体及 sort 排序
    //输出
    //三行，每行展示一位按照票数排序后的羊的的信息，包括候选羊编号，姓名以及票数。
    //【输入文件】
    //文件名：cunzhang.in
    //共有两行，第一行为一个大于 0 的整数 n，表示有 n 位羊参与投票。 第二行包括 n 个范
    //围在 1 至 3 之间的整数，表示这 n 位羊的投票编号。（假设没有投票羊弃权）
    elector electors[3];
    for (int i = 0; i < 3; i++) { electors[i].votes = 0;
        electors[i].id = i + 1;
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int who;
        cin >> who;
        electors[who - 1].votes++;
    }
    sort(electors, electors + 3, compare);
    vector<string> names = {"喜羊羊", "懒羊羊", "美羊羊"};
    for (int i = 0; i < 3; i++) {
        cout << electors[i].id << ' ' << names[electors[i].id - 1] << ' ' << electors[i].votes << endl; // 就是我忘记-1而造成的而已， 啊，浪费我20分钟的时间。
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}