/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

stack<int> s;


int main()
{
    /*
    题目描述：召见骑士
    某王国有5位骑士，每位骑士都有自己的编号，且这个王国的编号都为奇数，分别为1,3,5,7,9，在国王召见他们之前他们都必须经过只能从一边进出的长廊，长廊的宽度只能坐一个人。2018年1月1日这天，所有骑士依照编号从小到大的次序提前在长廊的入口等待，且只有当前面的人进入长廊后，后面的人才能进入长廊。国王想要召见一些骑士，把他们的编号写在纸上，让侍卫去宣传召见，问国王写的召见编号是否合理？


    输入
    输入一个编号序列。

    输出
    如果合理，输出“YES”，如果不合理，输出“NO”。

    难度
    A

    输入示例
    3 1 9 7 5

    输出示例
    YES
    */
    int n;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        s.push(n);
    }
    int flag = 1;
    for (int i = 1; i <= 9; i += 2)
    {
        if (s.top() == i)
            s.pop();
        else if (s.top() < i)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
