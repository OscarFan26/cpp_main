/*
 * @OscarFan 制作 : 
 * @Date: 2022-02-20 16:35:46
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
//
// Created by Yucheng Fan on 2022/2/13.
//
#include <iostream>
using namespace std;


int main(){
    
    // i++
    int i = 1;
    cout <<  i++ << endl; // 1
    cout << i << endl; // 2

    // ++a
    int a = 1;
    cout << ++a << endl; // 2
    cout << a << endl; // 2

    // more practices
    int test1 = 1;
    
    ++test1;
    cout << test1 << endl; // 2
    test1++;
    cout << test1 << endl; // 3
    return 0;
}
