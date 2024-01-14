#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

void choice_1(int first[10001], int second[10001], int len1, int len2){
    // 这种情况是 两个数 位数相同 并且没有进位
    int sum[10001] = {};
    int lsum = 0;
    while (lsum < len1){
        sum[lsum] = first[lsum] - second[lsum];
        lsum++;
    }
    while (sum[lsum-1]==0 && lsum>0){
        lsum--;
    }
    for (int i = lsum-1; i >= 0; i--){
        cout << sum[i];
    }
}


void choice_2(int first[10001], int second[10001], int len1, int len2){
    // 这种情况是 两个数 位数不相同 但是没有进位
    int sum[10001] = {};
    int lsum = 0;
    while (lsum < len1 || lsum < len2){
        sum[lsum] = first[lsum] - second[lsum];
        lsum++;
    }
    while (sum[lsum-1]==0 && lsum>0){
        lsum--;
    }
    for (int i = lsum-1; i >= 0; i--){
        cout << sum[i];
    }
}


void choice_3(int first[10001], int second[10001], int len1, int len2){
    // 这种情况是 两个数 位数不相同 且有进位 适用于全部
    int sum[10001] = {};
    int lsum = 0;
    while (lsum < len1 || lsum < len2){
        if (first[lsum] < second[lsum]){
            first[lsum] += 10;
            first[lsum+1]--;
        }
        sum[lsum] = first[lsum] - second[lsum];
        lsum++;
    }
    while (sum[lsum-1]==0 && lsum>0){
        lsum--;
    }
    for (int i = lsum-1; i >= 0; i--){
        cout << sum[i];
    }
    
}

int main(){
    // 高精度减法（一）：位数相同，没有退位
    char first_input[10001], second_input[10001];
    int first_number[10001] = {}, second_number[10001] = {};
    cin >> first_input >> second_input;
    int length = strlen(first_input), length_2 = strlen(second_input);
    // 倒序存储，转化
    for(int i = 0; i < length; i++){
        first_number[length-i-1] = first_input[i] - '0';
    }
    for (int i = 0; i < length_2; i++){
        second_number[length_2-i-1] = second_input[i] - '0';
    }
    // 使用函数，调用，输出
    // 选项一
    // choice_1(first_number, second_number, length, length_2);
    // 选项二
    // choice_2(first_number, second_number, length, length_2);
    // 选项三
    choice_3(first_number, second_number, length, length_2);
    return 0;
}