//
// Created by Oscar Fan on 2022/3/6.
//
#include <iostream>
using namespace std;

int main(){
    int k;
    cin >> k;
    int a[47] = {1, 1};
    for (int i = 2; i < k; i++){
        a[i] = a[i-1] + a[i-2];
    }
    cout << a[k-1];
    return 0;
}
