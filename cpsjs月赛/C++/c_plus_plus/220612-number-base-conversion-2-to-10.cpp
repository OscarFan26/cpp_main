// Made By OscarFan
// Date:   2022/6/12 上午 08:35
//    No Bugs forever~~~
//    Description:
//
# include <iostream>
# include <string>
# include <cmath>
// 进制转换 2 => 10
using namespace std;

int main() {
    string target;
    cin >> target;
    int len = target.size();
    int sum = 0;
    for (int i = 0; i < len; i++)
        sum += (target[i] - '0') * pow(2, len - i - 1);
    cout << sum << endl;
    return 0;
}