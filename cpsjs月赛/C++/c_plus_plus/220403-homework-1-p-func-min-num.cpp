#include <iostream>
using namespace std;

int get_minimum(int arr[5]){
    int minimum = 99999;
    for (int i = 0; i < 5; i++){
        if (arr[i] < minimum && arr[i] != 0) minimum = arr[i];
    }
    return minimum;
}


int main(){
    int arr[5] = {};
    for (int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    cout << get_minimum(arr) << endl;
    return 0;
}
