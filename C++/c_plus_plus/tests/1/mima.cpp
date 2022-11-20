//
// Created by Oscar Fan on 2022/3/27.
//
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char target[101];
    cin.getline(target, 101);
    for (int i = 0; i < 100; i++) {
        if ((target[i] >= 'a' && target[i] < 'z') ||
             target[i] >= 'A' && target[i] < 'Z')
        target[i] += 1;
        else if (target[i] == 'Z')
            target[i] = 'A';
        else if (target[i] == 'z')
            target[i] = 'a';
    }
    for (int j = 0; j < strlen(target); j++) { cout << target[j]; }
    return 0;
}
