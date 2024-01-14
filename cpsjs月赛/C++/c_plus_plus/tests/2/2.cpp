/*
 * @OscarFan 制作 : 
 * @Date: 2022-05-15 11:09:50
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    // 高精度 加法
    char a[1001], b[1001];
    int a1[1001] = {0}, b1[1001] = {0}, c1[1001] = {0}, d1[1001] = {0};
    cin >> a >> b;
    int lena = strlen(a), lenb = strlen(b);
    // 将字符串转换为数字
    for (int i = 0; i < lena; i++) {
        a1[lena - i] = a[i] - '0';
    }
    for (int i = 0; i < lenb; i++) {
        b1[lenb-i] = b[i] - '0';
    }
    int lenc = 0;
    int x  = 0;
    if (lena > lenb)
        lenc=lena;
    else
        lenc=lenb;
    for (int i = 1; i <= lenc; i++){
        c1[i]=a1[i]+b1[i]+x;
        x = c1[i] / 10;
        c1[i] %= 10;
    }
    if (x != 0){
        lenc ++;
        c1[lenc] = x;
    }
// --------------------------------------------------------------
    for (int j = 1; j <= lenc; j++){
        int t = 0;
        for (int k = 1; k <= lenc; k++){ 
            d1[j+k-1] = c1[j] * c1[k] + t + d1[j+k-1];
            t = d1[j+k-1] / 10;
            d1[j+k-1] %= 10;
        }
        d1[lenc+j] = t;
    }
    lenc = lenc * 2;
    while (lenc > 1 && d1[lenc] == 0) lenc--;
    for (int i = lenc; i > 0; i--){
        cout << d1[i];
    }
    return 0;
}