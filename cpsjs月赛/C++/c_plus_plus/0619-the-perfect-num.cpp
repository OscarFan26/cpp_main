/*
 * @OscarFan 制作 : 
 * @Date: 2022-06-19 10:22:15
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
// Made By OscarFan
// Date:  2022/6/19 上午 10:22
//       _..._
//    .-'_..._''.
//  .' .'      './
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
// FILE NAME: 0619-the-perfect-num.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 在1-1000里找到完数(因数的和等于自身)
    for (int i = 1; i <= 1000; i++) {
        int sum = 0;
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            cout << i << " ";
        }
    }
    return 0;
}