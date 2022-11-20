//
// Created by Yucheng Fan on 2022/2/20.
//
#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i < 51; ++i) {
        if (i == 6) {
            continue;
        }
        cout << i << " ";
    }
    return 0;
}