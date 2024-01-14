/*
 * @OscarFan 制作 : 
 * @Date: 2022-06-12 11:22:31
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
// Made By OscarFan
// Date:   2022/6/12 上午 11:22
//       _..._                                                                       
//    .-'_..._''.                                                                    
//  .' .'      './
//   .'                                                                              
// . '                              .-.                              .-.
//| |                           | |                              | |
//| |                       ,--| |---.                      ,---| |---.
//. '                       `---| |---'                      `---| |---'
// \ '.          .               | |                              | |
//  '. `._____.-'/            `-'                              `-'
//   `-.______ /
//           `
//
//    No Bugs forever~~~
//    Description:
//
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>
# include <cmath>

using namespace std;

int main() {
    // 输入三个数字, n,m,a, 输出n进制的m的a的进制的数字
    // 不要参考这个文件！！！这个文件有问题！！！
    int n, a;
    string m;
    cin >> n >> m >> a;
    // 先将n进制的m转化为10进制
    //  在将m转化为a进制
    int sum = 0;
    for (int i = 0; i < m.length(); i++)
        if (m[i] >= 'A')
            sum += (m[i] - 'A' + 10) * pow(n, m.length() - i - 1);
        else sum += (m[i] - '0') * pow(n, m.length() - i - 1);
    int new_m = sum;
    int pointer = 0;
    string arr;
    while (new_m) {
        if ((new_m % a ) >= 10) arr[pointer++] = (new_m % a) + 'A' - 10;
        else arr[pointer++] = new_m % a + '0';
        new_m /= a;
    }
    for (int i = pointer - 1; i >= 0; i--)
        cout << arr;
    cout << endl;
    return 0;
}