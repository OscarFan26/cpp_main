/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    开立方(lifang.cpp)
    【题目描述】
    给定一个浮点数k，1<=k<=100000，请输出k的立方根x，使得x*x*x与k的误差不超过0.001，
    请使用四则运算、分支判断、循环实现，不要直接使用pow函数
    
    输入:
    浮点数k
    输出:
    k的立方根x，保留3位有效数字 
    */
    double k, x = 0.0;
    cin >> k;
    // 使用二分法
    double left = 0.0, right = k;
    while (right - left > 1e-8){
        x = (left + right) / 2.0;
        if (x * x * x > k)
            right = x;
        else
            left = x;
    }
    cout << fixed << setprecision(3) << x << endl;
    return 0;
}