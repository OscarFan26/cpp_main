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
    // 输入一个数，输出其绝对值（高精度）
    char a[100001];
    cin >>a;
    if (a[0] == '-') {
        for (int i = 1; i < strlen(a); i++) {
            cout << a[i];
        }
    } else {
        cout << a;
    }
    return 0;
}
