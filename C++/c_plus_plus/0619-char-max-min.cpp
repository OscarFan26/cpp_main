// Made By OscarFan
// Date:  2022/6/19 上午 09:55
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
// FILE NAME: 0619-char-max-min.cpp
//

# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>
using namespace std;

int main() {
    // 输入一些字符，输出最大值和最小值（根据ASCII）
    int num;
    char max[2] = {}, min[2] = {'~'};
    cin >> num;
    for (int i = 0; i < num; i++){
        char c;
        cin >> c;
        if (c >= max[0]) max[0] = c;
        if (c <= min[0]) min[0] = c;
    }
    cout << max << " " << min << endl;
    return 0;
}