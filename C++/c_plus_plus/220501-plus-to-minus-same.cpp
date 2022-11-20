// <-> Made By OscarFan <->
// <-  Description:
/*
 *      
*/
// ->
// Hope there are no bugs in this file.
# include <iostream>
# include <cstring>
# include <string>
# include <cstdio>
# include <vector>
# include <algorithm>

using namespace std;

int main() {
    // 高精度数字 ： 正数 <-> 负数
    char a[10001];
    cin >> a;
    if (a[0] == '-') {
        for (int i = 1; i < strlen(a); i++) {
            cout << a[i];
        }
    } else if (a[0] == '0') {
        cout << a << endl;
    } else {
        cout << '-' << a << endl;
    }
    return 0;
}