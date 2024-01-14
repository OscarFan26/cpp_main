/*
 * @OscarFan 制作 : 
 * @Date: 2022-06-19 10:35:17
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
// Made By OscarFan
// Date:  2022/6/19 上午 10:35
//       _..._
//    .-'_..._''.
//  .' .'      './
// /.'
//.  .                .-.          .-.
//| |                 | |          | |
//|     |             ,---| |---.  ,---| |---.
//. |             `---| |---'  `---| |---'
// \ '.          .    | |          | |
//  '. `._____.-'/    `-'          `-'
//   `-.______ /
//           `
// TYPE:   C++
// FILE NAME: 0619-ke-jian-cao.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    //
//    题目名称：课间操
//    题目描述：课间操是一项积极的课间活动，能缓解每位学生的压力，有助于消除紧张学习后所产生的疲劳,使大脑得到积极的休息,提高学习效率。五年级三班共有n名学生，根据学校规定，课间操的队形是按m列排开，你能帮助班主任规划好队形吗？
//    样例输入：两个数字，分别代表本班人数和列数。
//    样例输出：课间操队形，*代表一名学生，左右相邻的学生要用
//    空格b隔开。
//    说明：两个数字（均为大于1的正整数），课间操队形，*代表一名学生，左右相邻的学生要用空格隔开。
//    【样例输入】
//    18 4
//    【样例输出】
//    * * * *
//    * * * *
//    * * * *
//    * * * *
//    * *
    int m, n;
    cin >> m >> n;
    int full_roles =  (m - (m % n)) / n;
    int last_roles = m % n;
    for (int i = 0; i < full_roles; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < last_roles; i++) {
        cout << "* ";
    }
    return 0;
}