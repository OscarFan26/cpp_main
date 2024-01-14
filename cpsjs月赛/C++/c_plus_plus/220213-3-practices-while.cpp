//
// Created by Yucheng Fan on 2022/2/13.
//
#include <iostream>
using namespace std;

int main(){
    int count = 0;
    while (true) {
        cout << "10101-01010--" << endl; // this code will run 6 times!
        count++;
        if (count == 6) {
            break;
        }
    }
    return 0;
}
