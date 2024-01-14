//
// Created by Oscar Fan on 2022/4/3.
//
#include <iostream>
using namespace std;

double fun(int num){
    double sum = 0.0;
    for (int i = 1; i <= num; i++){
        sum += double(1.0/i);
    }
    return sum;
}

int main(){
    int num;
    cin >> num;
    cout << fun(num);
    return 0;
}
