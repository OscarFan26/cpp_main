//
// Created by Oscar Fan on 2022/2/23.
//
#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main(){
    freopen("math.in", "r", stdin);
    freopen("math.out", "w", stdout);
    int num, mark, counter = 0;
    cin >> num;
    int i = num;
    while (i--){
        cin >> mark;
        counter = counter + mark;
        if (mark < 60)
            cout << mark << " ";
    }
    double answer = counter/num;
    cout << fixed << setprecision(2) << endl << answer;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
