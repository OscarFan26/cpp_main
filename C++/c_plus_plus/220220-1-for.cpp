//
// Created by Yucheng Fan on 2022/2/20.
//
#include <iostream>
using namespace std;

int main() {
    // for (控制变量初始化表达式; 循环条件表达式; 增量表达式){
    //      循环要作的事
    // }
    for (int i = 1; i < 101; i++){ // 循环1-100的值
        if (i % 2 != 0) // 判断是否是奇数
            cout << i << " "; // 输出奇数
    }
    return 0;
}
