/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    题目描述：学校排队
    课间休息时，小学生、男孩和女孩在食堂里排成一队。最初孩子们站在食堂里排队。然而，过了一会儿，站在女孩们前面的男孩们开始感到尴尬，下一秒，他们会让身后的女孩站到自己前面。
    让我们更精确地描述这个过程。假设队列中的位置由1到n的整数顺序编号，我们对位置号1中的人首先进行操作。如果在时间X，男孩站在第i个位置，女孩站在第i+1个位置，然后下一秒，男孩女孩的位置会交换，也就是此时第i个是女孩，第i+1个是男孩。时间是以秒为单位给出的。
    你现在知道孩子们的初始位置。确定队列在T秒之后的排列方式。
    【输入示例】
    5 1
    BGGBG
    【输出示例】
    GBGGB
    */
    int n, t;
    cin >> n >> t;
    queue<char> q;
    for (int i = 0; i < n; ++i) {
        char c;
        cin >> c;
        q.push(c);
    }
    while (t--) {
        for (int i = 0; i < n; ++i) {
            char c = q.front();
            q.pop();
            if (c == 'B' && q.front() == 'G') {
                q.pop();
                q.push('G');
                q.push('B');
            } else {
                q.push(c);
            }
        }
    }
    while (!q.empty()) {
        cout << q.front();
        q.pop();
    }
    cout << endl;
    return 0;
}