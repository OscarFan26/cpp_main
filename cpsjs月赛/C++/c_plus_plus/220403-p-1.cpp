//
// Created by Oscar Fan on 2022/4/3.
//
#include <iostream>
using namespace std;

int x(int a, int b){ return a > b ? a : b; }

int main(){
    int a, b;
    cin >> a >> b;
    cout << x(a, b);
}
