// Made By OscarFan
// Date:  7/17/2022 9:28 AM
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
// FILE NAME: the_pass_code_of_the_king.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
//    国王的密码：格式0-20220717-15-5 性别-拜访日期-年龄-验证码
//    验证码：(0*1+2*2.........5*10+5*11)%11
//    请验证验证码是否合法
    string str;
    cin >> str;
    long long len = str.length();
    int sum = 0;
    int index = 1;
    int last_two_num = 0;
    for (int i = 0; i < len-1; i++) {
        if (str[i] == '-')
            continue;
        sum += (str[i] - '0') * index;
        index++;
    }
    int decision_num;
    if (str[len-1] - '0' == 'X') decision_num = 10;
    else decision_num = str[len-1] - '0';
    if (sum % 11 == decision_num)
        cout << "Yes";
    else cout << "No";
    cout << endl << sum % 11 << endl;

    return 0;
}
// 0+4+0+4+40+0+49+16+18+50+11+60=
// 0*1 + 2*2 + 1*4+8*5+7*7+2*8+5*9+1*10+5*11=
// 8 - 48 - 97 --- 113 131 181 192 252