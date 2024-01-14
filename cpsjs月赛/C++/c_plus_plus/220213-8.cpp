//
// Created by Yucheng Fan on 2022/2/13.
//
#include <iostream>
using namespace std;

int main(){
    int target_num;
    cin >> target_num;
    while (target_num != 0) {
        cout << target_num%10 << endl;
        target_num /= 10;
    }
    return 0;
}
