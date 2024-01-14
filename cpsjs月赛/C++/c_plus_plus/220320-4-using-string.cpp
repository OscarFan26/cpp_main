//
// Created by Oscar Fan on 2022/3/20.
//
#include <iostream>
#include <string>
using namespace std;

int main(){
    // 定义两个string
    string string1, string2;
    cin >> string1 >> string2;
    // 把string2给string1
    string2 = string1;
    // 相加
    string2 += string1;
    // 这样string1的值会跟在string2后面。与python一致
    cout << string2 << endl << string1 << endl << endl;
    // 还有比较
    string string3, string4;
    cin >> string3 >> string4;
    cout << (string3 == string4) << endl << (string4 != string3) << endl;
    cout << "----------------";
    cout << (string3 > string4);
    // 取出两个字符串每一个字符，比较哪一个的ASCII码值大，谁就大
    return 0;
}
