/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    for (int i = 1; i <= 5; i++) s.push(i);
    cout << s.size() << endl;
    s.pop(); s.pop();
    cout << s.top() << endl;
    if (!s.empty()) 
        for (int i = 0; i < s.size(); i++) {
            cout << s.top() << " ";
            s.pop();
        }
    return 0;
}
