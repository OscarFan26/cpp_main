//
// Created by Yucheng Fan on 2022/2/13.
//
#include <iostream>
using namespace std;

int n;

int main(){
    int count = 1;
    cin >> n;
    cout << endl;
    while (count <= n) {
        if (count%3==0)
            cout << count << " ";
        count++;
    }

    return 0;
}
