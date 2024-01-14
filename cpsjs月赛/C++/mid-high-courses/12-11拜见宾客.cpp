/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    等候宾客

    有两条命令： A 和 B xxx
    A表示从等候区走到宾客区，如无等待的人，输出None
    B xxx 表示有人进入等候区，编号为xxx

    最终输出拜访的顺序（包括None）
    */
    queue<string> que;
    string s;
    while (cin >> s){
        if (s == "A"){
            if (que.empty()){
                cout << "-None" << endl;
            }
            else {
                cout << '-' << que.front() << endl;
                que.pop();
            }
        }
        else {
            string x;
            cin >> x;
            que.push(x);
        }
    }

    return 0;
}
