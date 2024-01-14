#include <bits/stdc++.h>
using namespace std;
queue<int> q;
int main()
{
    char s[11] = {};
    cin >> s;
    for (int i = 0; i < strlen(s); i++)
    {
        q.push(s[i] - 48);
    }
    while (!q.empty())
    {
        
        // 输出删除的元素
        cout << q.front();
        // 删除队首元素
        q.pop();
        // 判断队列是否为空
        if (!q.empty())
        {
            // 新队首入队
            q.push(q.front());
            q.pop();
        }
    }
    return 0;
}
