/*
 * @OscarFan 制作 : 
 * @Date: 2022-05-22 10:59:28
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int times_three(int target){
    if (target == 1) return 1;
    return 3*times_three(target-1);
}

int main(){
    // 等比数列
    // 不允许用公式，只能用递归
    int num;
    cin >> num;
    cout << times_three(num);
    return 0;
}