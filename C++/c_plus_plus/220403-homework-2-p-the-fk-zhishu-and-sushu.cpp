//
// Created by Oscar Fan on 2022/4/3.
//
// 你敢相信，素数就是质数？拜托，我才五年级！
#include <iostream>
using namespace std;

int get_zhishu(int ncheck){
    int signal = 0;
    for (int i = 2; i < ncheck; i++){
        if (ncheck % i != 0) signal = 1; else { signal = 0; break; }
    }
    return signal;
}

int main(){
    int start, end, signal;
    cin >> start >> end;
    if (start > end || start <= 2) return 0;
    for (;start <= end; start++) {
        signal = get_zhishu(start);
        if (signal == 1) cout << start << ", ";
    }
    return 0;
}
