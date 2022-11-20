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
    // 输出一个高精度数字的百位
//    char a[10001];
//    int b[10001];
//    cin >> a;
//    // 倒序
//    for (int i = 0; i <= strlen(a)-1; i++) {
//        b[i] = a[strlen(a)-1-i] - '0';
//    }
//    cout << b[2] << endl;
    char a[10001];
    vector<int> b;
    cin >> a;
    for (int i = 0; i <= strlen(a)-1; i++)
        b.push_back(a[strlen(a)-1-i] - '0');
    cout << b[2] << endl;
    return 0;
}