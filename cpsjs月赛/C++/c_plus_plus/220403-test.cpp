//
// Created by Oscar Fan on 2022/4/3.
//
#include <iostream>
using namespace std;

int get_minimum(int arr[10]){
    int minimum = 99999;
    for (int i = 0; i < 10; i++){
        if (arr[i] < minimum && arr[i] != 0) minimum = arr[i];
    }
    return minimum;
}


int main(){
    int arr[10] = {};
    for (int i = 0; i < 10; i++){
        cin >> arr[i];
    }
    cout << get_minimum(arr) << endl;
    return 0;
}
