//
// Created by Yucheng Fan on 2022/2/20.
//
#include <iostream>
using namespace std;

int main(){
    // 输出1-100内所有3的倍数的和
    int n = 0; // 累加器
    for (int i = 3; i < 101; i+=3) { // 注意⚠️在for循环中的初始化是局部变量!!!!!
        n += i; // 让累加器加上i
    }
    cout << n;
    return 0;
}
