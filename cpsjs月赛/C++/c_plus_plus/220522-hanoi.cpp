/*
 * @OscarFan 制作 : 
 * @Date: 2022-05-22 10:38:40
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int times;

int hanoi(int num, char X, char Z, char Y){
    if (num == 0) return 0;
    // x -> z; y
    hanoi(num-1, X, Y, Z);
    times++;
    cout << "第" << times << "次移动： 将 " << X << " 移动到 " << Z << endl;
    // y -> z; x
    hanoi(num-1, Y, Z, X);
}

int main(){
    // 汉诺塔
    int t;
    cin >> t;
    hanoi(t, 'X', 'Z', 'Y');
    return 0;
}