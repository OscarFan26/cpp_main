/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    stack<char> s;
    int len = a.length();
    for (int i = 0; i < len; i++) {
        if (a[i] == '[') {
            if (s.top() != '(')  s.push(a[i]);
            else {
                cout << "NO" << endl;
                return 0;
            }
        }
        else if (a[i] == '(') s.push(a[i]);
        else if (a[i] == ')' && s.top() == '(')
            s.pop();
        else if (a[i] == ']' && s.top() == '[')
            s.pop();
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (s.empty()) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
