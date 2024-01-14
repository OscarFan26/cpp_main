//
// Created by Oscar Fan on 2022/3/20.
//
#include <iostream>
using namespace std;

int main(){
    int count = 0;
    char a[256];
    for (int i = 0; i < 255; i++) { cin >> i; }
    for (int i = 0; i < 255; i++) {
        if (a[i] >= '0' && a[i] <= '9'){ count++; }
    }
    cout << count << endl;
    return 0;
}
