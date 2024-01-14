/*
 * @OscarFan 制作 : 
 * @Date: 2022-05-08 09:08:05
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // 高精度数字 除以 正常数字 （int）
    char a[1001];
    int len1,  a1[1001], b1;
    cin >> a >> b1;
    len1 = strlen(a);
    // 存储
    
    for (int i = 0; i < len1; i++) a1[i+1] = a[i] - '0';
    // 计算
    int c[1001] = {}, x=0;
    for (int i = 1; i <= len1; i++){
        c[i] = (x*10+a1[i])/b1;
        x = (x*10+a1[i])%b1;
    }
    // 输出
    int lenc = 1;
    while (c[lenc]==0 && lenc<len1){
        lenc++;
    }

    for (int i = lenc; i <= len1; i++){
        cout << c[i];
    }
    // 输出余数（opt）
    if (x != 0)
        cout << " ······ " << x << endl;
    return 0;
}