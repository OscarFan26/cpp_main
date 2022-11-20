//
// Created by Yucheng Fan on 2022/2/20.
//
#include <iostream>
using namespace std;
// 输入n个正整数，输出这n个数中第二大的数
int main(){
    int n, a, max1 = 0, max2 = 0;
    cin >> n;
    cin >> max1;
    for (int i = 1; i < n; i++) {
        if (max1 > max2)
            cin >> max2;
        else
            cin >> max1;


    }

    cout << max1 << " " << max2;
    return 0;
}