/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*高精度数判断回文 栈思路*/
    string a;
    cin >> a;
    stack<char> s;
    int len = a.length();
    for (int i = 0; i < len; i++) {
        s.push(a[i]);
    }
    for (int i = 0; i < len; i++) {
        if (a[i] != s.top()) {
            cout << "NO" << endl;
            return 0;
        }
        s.pop();
    }
    cout << "YES" << endl;
    return 0;
}