// Made By OscarFan
// Date:  2022/6/19 上午 09:34
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
// FILE NAME: 0619-run_nian.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 输入m, n，依次输出是闰年的年份，一行10个
    int m, n, line_counter = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
            cout << i << " ";
            line_counter++;
        }
        if (line_counter == 10) {
            cout << endl;
            line_counter = 0;
        }
    }
    return 0;
}