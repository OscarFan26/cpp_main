/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int n;
string s;
stack<char> st;

int main(){
    /*啊！太难啦！*/
    /*题目描述：字符串匹配问题
    字符串中只含有()，[]，<>，{} ，判断输入的字符串中括号是否匹配。如果括号有互相包含的形式，从内到外必须是<>，()，[]，{}，例如：输入[()]，输出YES；而输入([])，([)]都应该输出NO。
    输入
    输入的第1行是一个整数n，表示一下有多少个由括号组成的字符串。接下来的n行，每行都是一个由括号组成的长度不超过255的字符串。
    输出
    n行，每行都是YES或者NO。

    难度
    较难

    输入示例
    5
    {}{}<><>()()[][]
    {{}}{{}}<<>><<>>(())(())[[]][[]]
    {{}}{{}}<<>><<>>(())(())[()][()]
    {<>}{[]}<<>>(<>)(())[(<>)]
    ><{}<>[][]()()[]

    输出示例
    YES
    YES
    YES
    YES
    NO*/
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == '(' || s[j] == '[' || s[j] == '<' || s[j] == '{')
                st.push(s[j]);
            else if (st.empty()) { cout << "NO";
                return 0;  // if进行到这里，说明接下来的匹配为右半边括号匹配，栈中必须还有元素；如果没有元素了，所以不匹配
            }
            else if (s[j] == ')')
            {
                if (st.top() == '(')
                    st.pop();
                else
                    break;
            }
            else if (s[j] == ']')
            {
                if (st.top() == '[')
                    st.pop();
                else
                    break;
            }
            else if (s[j] == '>')
            {
                if (st.top() == '<')
                    st.pop();
                else
                    break;
            }
            else if (s[j] == '}')
            {
                if (st.top() == '{')
                    st.pop();
                else
                    break;
            }
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        while (!st.empty())
            st.pop();
    }

    return 0;
}
