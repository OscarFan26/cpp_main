//
// Created by Oscar Fan on 2022/2/13.
//
// 题目名称：小玉游泳
// 题目描述：小玉开心地在游泳，可是她很快难过的发现，自己的力气不够，游泳好累哦。
// 已知小玉第一步能游2米，可是随着越来越累，力气越来越小，
// 她接下来的每一步都只能游出上一步距离的98%。现在小玉想知道，如果要游到距离x米的地方，
// 她需要游多少步呢。请你编程解决这个问题。
// 输入描述：输入一个数字（不一定是整数，小于100m），表示要游的目标距离。
// 输出描述：输出一个整数，表示小玉一共需要游多少步。

#include <iostream>
using namespace std;

int main(){
    double target, distance = 2;
    cin >> target;
    int    counter = 0;
    while (target > 0){
        counter += 1;
        distance *= 0.98;
        target -= distance;
    }
    cout << counter << endl;
    return 0;
}
