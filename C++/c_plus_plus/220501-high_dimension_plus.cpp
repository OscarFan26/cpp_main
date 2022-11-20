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
# include <cstring>
using namespace std;

void len_with_no_more_ten(int a[1001], int b[1001], int l1, int l2){
    int sum[1001] = {};
    int lenc = 0;
    while (lenc < l1 || lenc < l2){
        sum[lenc] = a[lenc] + b[lenc];
        lenc++;
    }
    // 倒序输出
    for (int i = lenc-1; i>=0; i--){
        cout << sum[i];
    }
}

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
    // 高精度 加法
    char s1[1001], s2[1001];
    int n1[1001] = {0}, n2[1001] = {0};
    cin >> s1 >> s2;
    int len1 = strlen(s1), len2 = strlen(s2);
    // 将字符串转换为数字
    for (int i = 0; i <= len1-1; i++) {
        n1[i] = s1[len1-1-i] - '0';
    }
    for (int i = 0; i <= len2-1; i++) {
        n2[i] = s2[len2-1-i] - '0';
    }
//    输出当前的两个数组的值
//    for (int i = 0; i < len1; i++){
//        cout << n1[i];
//    }
//    cout << endl;
//    for (int i = 0; i < len2; i++){
//        cout << n2[i];
//    }
    // 加法
    // 该方法使用全部（任何情况）
    len_ok_with_more_ten(n1, n2, len1, len2);
    return 0;
}