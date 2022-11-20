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

void len_ok_with_more_ten(int a[1001], int b[1001], int l1, int l2){
    int sum[1001] = {0};
    int lenc = 0;
    int x  = 0;
    while (lenc < l1 || lenc < l2){
        sum[lenc] = a[lenc] + b[lenc] + x;
        x = sum[lenc] / 10;
        sum[lenc] %= 10;
        lenc++;
    }
    if (x != 0){
        sum[lenc] = x;
        lenc++;
    }
    for (int i = lenc-1; i>=0; i--){
        cout << sum[i];
    }
}


int main() {
    char a[10001];
    int l1;
    int n1[10001] = {0};
    cin >> a;
    l1 = strlen(a);
    for (int i = 0; i <= l1-1; i++) {
        n1[i] = a[l1-1-i] - '0';
    }
    len_ok_with_more_ten(n1, n1, l1, l1);
    return 0;
}