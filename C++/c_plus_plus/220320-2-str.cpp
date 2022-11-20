//
// Created by Oscar Fan on 2022/3/20.
//
// 字符串：定义方式： char 名字[长度+1] = "..........."
//                            <=|    = {" . . . "}
//                                = {'a', 'b', 'c', 'd'}
//       字符串必须以"\0"结尾，不然就是字符数组。所以才+1
// 输入：cin >> 数组名；无空格输入
//            cin.getline(数组名, 长度); 有空格输入
#include <iostream>
using namespace std;

int main(){
    // 带空格
    char a[1000];
    cin.getline(a, 1000);
    // 不带空格
    char b[255];
    cin >> b;
    // print
    cout << a << endl << b;
    return 0;
}
