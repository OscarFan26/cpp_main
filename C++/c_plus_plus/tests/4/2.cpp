// Made By OscarFan
// Date:  7/10/2022 9:32 AM
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
// FILE NAME: 2.cpp
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>
# include <cmath>
using namespace std;

void calc(int n, string m, int a){

    // 输入三个数字, n,m,a, 输出n进制的m的a的进制的数字

    // 先将n进制的m转化为10进制
    //  在将m转化为a进制
    int sum = 0;
    for (int i = 0; i < m.length(); i++)
        if (m[i] >= 'A')
            sum += (m[i] - 'A' + 10) * pow(n, m.length() - i - 1);
        else sum += (m[i] - '0') * pow(n, m.length() - i - 1);
    int new_m = sum;
    int pointer = 0;
    string arr[1001];
    while (new_m) {
        if ((new_m % a ) >= 10) arr[pointer++] = (new_m % a) + 'A' - 10;
        else arr[pointer++] = new_m % a + '0';
        new_m /= a;
    }
    for (int i = pointer - 1; i >= 0; i--)
        cout << arr[i];
    cout << endl;

}

int main() {
    // 进制转换：16 -> 10
    string targ;
    cin >> targ;
    calc(16, targ, 10);
    return 0;
}