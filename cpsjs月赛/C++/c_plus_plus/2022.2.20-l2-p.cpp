//
// Created by Oscar Fan on 2022/2/23.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double      num;
    int      kg;
    double      counter = 0.0;
    cin >> num;
    for (int i = num; i; i--) {
        cin >> kg;
        if (kg < 500) {
            counter++;
            cout << kg << " ";
            continue;
        }
        if (kg >= 551) {
            counter++;
            cout << kg << " ";
            continue;
        }
    }
    double percentage = (counter/num)*100.0;
    cout  << fixed << setprecision(0) << endl << percentage << "%" << endl;
    return 0;
}
