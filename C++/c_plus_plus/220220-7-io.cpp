//
// Created by Yucheng Fan on 2022/2/20.
//
#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
    int a,b;
    cin >> a >> b; // 3, 5
    cout << a+b;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
