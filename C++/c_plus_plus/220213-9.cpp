//
// Created by Yucheng Fan on 2022/2/13.
//
#include <iostream>
using namespace std;

int main(){    int num, s = 0;
    cin >> num;
    int ge;
    if (num == 0)
        s = 0;
    else
        while (num != 0) {
            ge = num % 10;
            s = s * 10 + ge;
            num = num / 10;
        }
    cout << s << endl;
    return 0;
}