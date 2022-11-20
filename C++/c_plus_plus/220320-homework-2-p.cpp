//
// Created by Oscar Fan on 2022/3/20.
//
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char ch1[81], ch2[81];
    cin.getline(ch1, 81);
    cin.getline(ch2, 81);
    if (ch1 == ch2) { cout << 0; }
    else { if (ch1 - ch2 < 0 ) cout << ch2 - ch1; else { cout << ch1 - ch2; } }
    return 0;
}
