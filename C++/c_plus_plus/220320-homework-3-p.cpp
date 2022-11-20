//
// Created by Oscar Fan on 2022/3/20.
//
#include <iostream>
#include <string>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    a += b;
    for (int i = a.length(); i >= 0; i--){
        cout << a[i];
    }
    return 0;
}