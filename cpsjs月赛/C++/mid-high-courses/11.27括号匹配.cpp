/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

char s[101], a[101];
int top = 0;

void push(char x) {
    top++;
    s[top] = x;
}

void  pop() {
    if (top > 0)
        top--;
}

char getTop() { return s[top]; }

int main(){
    cin >> a;
    int len = strlen(a);
    for (int i = 0; i < len; i++) {
        if (a[i] == '[' || a[i] == '(') push(a[i]);
        else if (a[i] == ')' && getTop() == '(') pop();
        else if (a[i] == ']' && getTop() == '[') pop();
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (!top) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
