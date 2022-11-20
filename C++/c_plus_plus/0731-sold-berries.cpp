// Made By OscarFan
// Date:  7/31/2022 11:12 AM
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
// FILE NAME: 0731-sold-berries.cpp
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
    // 逆推：卖草莓
    // 五个人，每个人先吃掉一个草莓，然后取走五分之一，接下来4人都是这样，问原来有几个草莓？
    // 无输入，输出3121
    int sum = 0, berries[6] = {};
    for (int i = 0;; i++) {
        berries[5] = i;
        for (int j = 5; j > 1; j--) {
            sum = berries[j] * 5 + 1;
            if (!(sum % 4)) berries[j - 1] = sum / 4;
            else break;
            if (berries[1] != 0) {
                cout << berries[1] * 5 + 1 << endl;
                return  0;
            }
        }
    }
}