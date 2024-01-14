//
// Created by Oscar Fan on 2022/3/6.
//
// 数组，类似于python的列表，一个数组只能存储相同类型的值。
// 格式：
//
// int arr[8] = {1, 2, 3, 4, 5, 6};
//
//
// int -> 数据类型
// arr 数组名字
// [8] 有8个值
// {..} 值
// 类型需一致！！！
// 与python相同，下标也从0开始，-1结尾。
#include <iostream>
using namespace std;

int main(){
    // 数组
    int arr1[8] = {}; // 0,0,0,0,0,0,0,0
    cout << arr1[0] << " " << arr1[3] << endl;
    int arr2[4] = {1,2,3};
    cout << arr2[-1] << endl;
    int arr3[10] = {9,8,7,6,5,4,3,2,1};
    cout <<arr3[1] << " " << arr3[9] << endl;
    return 0;
}
