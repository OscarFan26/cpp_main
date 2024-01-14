//
// Created by Yucheng Fan on 2022/2/13.
//
#include <iostream>
using namespace std;

int main(){
    int n, s, mmax = 999999999;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s < mmax)
            mmax = s;
    }
    cout << mmax << endl;
    return 0;
}
