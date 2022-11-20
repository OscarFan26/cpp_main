// Made By OscarFan
// Date:  7/24/2022 9:19 AM
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
// FILE NAME: isbn.cpp
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
    freopen("isbn.in", "r", stdin);
    freopen("isbn.out", "w", stdout);
    // 【问题描述】
    //每一本正式出版的图书都有一个 ISBN 号码与之对应，ISBN 码包括 9 位数字、1 位识别码和 3
    //位分隔符，其规定格式如 x-xxx-xxxxx-x，其中符号-就是分隔符（键盘上的减号），最后一
    //位是识别码，例如 0-670-82162-4 就是一个标准的 ISBN 码。ISBN 码的首位数字表示书籍的
    //出版语言，例如 0 代表英语； 第一个分隔符-之后的三位数字代表出版社，例如 670 代表维
    //京出版社；第二个分隔符后的五位数字代表该书在该出版社的编号；最后一位为识别码。
    //识别码的计算方法如下：
    //首位数字乘以 1 加上次位数字乘以 2……以此类推，用所得的结果 对 11 取余，所得的余数即
    //为识别码，如果余数为 10，则识别码为大写字母 X。例如 ISBN 号码 0-670-82162-4 中的识
    //
    //别码 4 是这样得到的：对 067082162 这 9 个数字，从左至右，分别乘以 1,2,...,9 再求和，
    //即 0×1+6×2+……+2×9=158，然后取 158 %11 的结果 4 作为识别码。
    //你的任务是编写程序判断输入的 ISBN 号码中识别码是否正确，如果正确，则仅输出 Right；
    //如果错误，则输出你认为是正确的 ISBN 号码。
    string code;
    string numbers;
    cin >> code;
//    numbers += code[0] += code[2] += code[3] += code[4] += code[6] += code[7] += code[8] += code[9] += code[11];
    for (int i = 0; i < code.length() - 1; i++) {
        if (i == 0 || i == 2 || i == 3 || i == 4 || i == 6 || i == 7 || i == 8 || i == 9 || i == 10 || i == 12)
            numbers += code[i];
    }
//    cout << numbers;
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++)
        sum += (numbers[i] - '0') * (i + 1);
    if (sum % 11 == (code[code.size()-1] - '0'))
        cout << "Right";
    else {
        for (int i = 0; i < code.size() - 1; i++) cout << code[i];
        cout << sum % 11;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}