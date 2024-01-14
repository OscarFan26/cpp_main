//
// Created by Yucheng Fan on 2022/2/13.
//
#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    cout << endl;
    int a;
    int count = 0;
    while (n--) {
        cin >> a;
        if (a == m) {
            count++;
        }
    }
    cout << count;
    return 0;
}
