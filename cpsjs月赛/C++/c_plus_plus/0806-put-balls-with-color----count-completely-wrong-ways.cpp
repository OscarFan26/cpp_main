// Made By OscarFan
// Date:  8/6/2022 9:10 AM
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
// FILE NAME: 0806-put-balls-with-color----count-completely-wrong-ways.cpp
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

int put_balls(int n) {
    // 注：分析：f（N) = (n-1)*(f(n-1)+f(n-2))
    if (n == 1) return 0;
    if (n == 2) return 1;
    return (n - 1) * (put_balls(n - 1) + put_balls(n - 2));
}

int main() {
    // 小球摆放问题，输入n,代表有n个小球n个盒子，问有多少中·完全·错误的摆法（必须是完全错误）(有颜色区分)
    //   递归
    int n;
    cin >> n;
    cout << put_balls(n);
    return 0;
}