#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    /*
    二：程序编写题

    题目名称：高精度数的减法
    题目描述：输入两个高精度数（长度不超过100位）a,b。求a-2b的值。
    输入描述：共2行，第1行是被减数a，第2行是减数b（a>2b并且a，2b的位数不同且不存在借位，且b+b不存在借位）。
    输出描述：一行，即所求的差。

    样例输入：
    888888888888888888888888
    44444444
    样例输出：
    888888888888888800000000

    说明：高精度数长度不超过100位，a>2b并且a，2b的位数不同且不存在借位，且b+b不存在进位。
    */
    char a[101], b[101];
    cin >> a >> b;
    int len1 = strlen(a);
    int len2 = strlen(b);
    int first[101] = {}, second[101] = {};
    for (int i = 0; i < len1; i++){
        first[i] = a[i] - '0';
    }
    for (int i = 0; i < len2; i++){
        second[i] = b[i] - '0';
    }
    int two_b[101] = {};
    int lenc = 0;
    while (lenc < len1 || lenc < len1){
        two_b[lenc] = second[lenc] + second[lenc];
        lenc++;
    }
    int sum[10001] = {};
    int lsum = 0;
    while (lsum < len1 || lsum < len2){
        if (first[lsum] < two_b[lsum]){
            first[lsum] += 10;
            first[lsum+1]--;
        }
        sum[lsum] = first[lsum] - two_b[lsum];
        lsum++;
    }
    while (sum[lsum-1]==0 && lsum>0){
        lsum--;
    }
    for (int i = lsum-1; i >= 0; i--){
        cout << sum[i];
    }


    return 0;
}