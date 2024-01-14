/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

string s;
stack<string> st;


int main(){
    /*
    题目描述：计算表达式的值
    描述

    给定一个只包含加法和乘法的算数表达式，请你编程计算表达式的值。

    输入
    一行，为需要计算的表达式，表达式中只包含数字、加法运算符'+'、乘法运算符'*'，而且没有括号，所有参与运算的数字均为0到2^31-1之间的整数。
    输入数据保证这一行只有0-9、+、* 这12种字符。
    输出
    一个整数，表示这个表达式的值。
    注意：当答案长度多余4位时，请只输出最后4位，前导0不输出。

    难度
    难

    输入示例1
    1+1*3+4
    输出示例1
    8

    输入示例2
    1+1234567890*1
    输出示例2
    7891

    输入示例3
    1+10000003*1
    输出示例3
    4
    */
    cin >> s;
    int len = s.length();
    // 分段到stack
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '+')
        {
            st.push("+");
            continue;
        }
        if (s[i] == '*')
        {
            st.push("*");
            continue;
        }
        string tmp = "";
        while (i < len && s[i] >= '0' && s[i] <= '9')
        {
            tmp += s[i];
            i++;
        }
        st.push(tmp);
        i--;
    }
    // 计算
    int ans = 0;
    while (!st.empty())
    {
        string tmp = st.top();
        st.pop();
        if (tmp == "+")
        {
            ans += stoi(st.top());
            st.pop();
        }
        else if (tmp == "*")
        {
            ans *= stoi(st.top());
            st.pop();
        }
        else
        {
            ans += stoi(tmp);
        }
    }
    // 输出
    // cout << ans << endl;     RICKROLL!!!
    // return 0;  rickroll
    cout << ans % 10000 << endl;
    return 0;
}
