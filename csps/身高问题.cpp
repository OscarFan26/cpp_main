
//大家排队，都面向右边。大家只能向下看。从左边数第一位开始，如果第2位同学比他低，他能看到该同学的头型，如果高就看不到了，后面的也看不到。输入n个人，再输入n个人的身高。求所有人能看到其他人的头型总数有多少。（1<n<10^6)

//输入：
//共两行。第一行一个整数n表示总人数。 第二行依次输入n个人的身高。 输出： 一个整数，表示所有人能看到其他人的头型总数。

#include <iostream>
#include <stack>
using namespace std;
int main() {
    long long        n, ans = 0;
    stack<long long> s;
    cin >> n;
    while (n--) {
        long long p;
        cin >> p;
        while (!s.empty() && s.top() <= p) { s.pop(); }
        ans += s.size();
        cout << s.size() << endl;
        s.push(p);
    }
    cout << ans;
    return 0;
}
