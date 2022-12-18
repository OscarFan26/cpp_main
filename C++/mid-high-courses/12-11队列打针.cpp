/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    有n个人，序号从1~n. 
    当队列中有至少2人时，在第一个人打完针后，新的第一个人将会排在整个队伍的最后。
    输出正确的打针顺序。
    */
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (q.size() > 1) {
        cout << q.front() << " ";
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front() << endl;
    return 0;
}
