/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    题目描述：信息加密
    在传递信息的过程中，为了加密，有时需要按一定规则将文本转换成密文发送出去。有一种加密规则是这样的：
    1. 对于字母字符，将其转换成其后的第4个字母。例如：A→E，a→e ，W→A，w→a；
    2. 对于非字母字符，保持不变。
    现在，请你根据输入的一行字符，输出其对应的密码。
    【样例输入】
    I(2019)love(08)China(15)!
    【样例输出】
    M(2019)pszi(08)Glmre(15)!
    */
    string s;
    queue<string> q;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (isalpha(s[i])) {
            if (isupper(s[i])) {
                q.push(string(1, (s[i] - 'A' + 4) % 26 + 'A'));
            } else {
                q.push(string(1, (s[i] - 'a' + 4) % 26 + 'a'));
            }
        } else {
            q.push(string(1, s[i]));
        }
    }
    while (!q.empty()) {
        cout << q.front();
        q.pop();
    }
    cout << endl;
    return 0;
}

