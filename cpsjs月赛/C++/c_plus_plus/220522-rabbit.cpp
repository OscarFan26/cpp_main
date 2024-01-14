/*
 * @OscarFan 制作 : 
 * @Date: 2022-05-22 09:45:14
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

// 兔子生长
int rabbit(int month){
    if (month == 1 || month == 2 )
        return 1;
    return rabbit(month - 1) + rabbit(month - 2);
}


int main(){
    int num;
    cin >> num;
    cout << rabbit(num);    // <---------------- 调用
    // 11 -> 89
    return 0;
}