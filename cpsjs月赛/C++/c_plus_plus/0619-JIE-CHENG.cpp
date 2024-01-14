// Made By OscarFan
// Date:  2022/6/19 上午 10:12
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
// FILE NAME: 0619-JIE-CHENG.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int f(int num){
    if (num == 1) return 1;
    return f(num - 1) * num;
}

int main() {
    // 输入一个数字，输出他们的阶乘的和
    // 栗子： 3: 1! + 2! + 3！
    // 数据范围：1 <= n <= 13
    long long num, sum = 0;
    cin >> num;
    for (int i = 1; i <= num; i++)
        sum += f(i);
    cout << sum << endl;
    return 0;
}