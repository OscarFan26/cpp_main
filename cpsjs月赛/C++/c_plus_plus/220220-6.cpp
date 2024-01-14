//
// Created by Yucheng Fan on 2022/2/20.
//
#include <iostream>
using namespace std;

int main(){
    int n, a = 0;
    cin >> n;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            a++;
            break;
    }
    cout << ( a == 0 ? "Y" : "N");
    return 0;
}
