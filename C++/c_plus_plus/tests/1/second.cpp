//
// Created by Oscar Fan on 2022/3/27.
//
// compare and print the second big number of the array.>
#include <iostream>
using namespace std;

int main(){
    int length, arr[101] = {};
    int max1 = 0, max2 = 0;
    cin >> length;
    for (int i = 0; i < length; i++) { cin >> arr[i]; }
    for (int j = 0; j < 100; j++) {
        if (arr[j] > max1) {
            max2 = max1;
            max1 = arr[j];
        }
        else if (arr[j] > max2) max2 = arr[j];
    }
    cout << max2 << endl;
    return 0;
}
