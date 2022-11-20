//
// Created by Oscar Fan on 2022/3/27.
//
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char a[501];
    cin.getline(a, 501);
    int length = strlen(a);
    int flag = 0, start = 0, last = 0;
    for (int i = 0; i < length; i++) {
        if (a[i] == ' ' || i == length - 1) {
            if (i == length - 1) last = i;
            else {
                flag++;
                last = i - 1;
                 }
            for (int j = last; j >= start; j--) cout << a[j];
            if (flag == 1){
                cout << " ";
                flag = 0;
            }
            start = i + 1;
        }
    }
    return 0;
}
