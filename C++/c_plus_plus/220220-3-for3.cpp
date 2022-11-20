//
// Created by Yucheng Fan on 2022/2/20.
//
#include <iostream>
using namespace std;
// 输入m和n，输出m到n之间5的倍数

int main(){
    int m, n;
    cin >> m >> n;
    for (;m <= n;) {
        if (m % 5 == 0){
            cout << m << " ";
        }
        m++;
    }
    return 0;
}
