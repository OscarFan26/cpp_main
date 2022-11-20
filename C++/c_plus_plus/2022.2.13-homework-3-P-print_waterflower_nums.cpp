//
// Created by Oscar Fan on 2022/2/13.
//
// 输出三位数的水仙花数
#include <iostream>
using namespace std;

int main(){
    int ShuiXianHua_Numbers = 100, GeWei, ShiWei, BaiWei;
    while (ShuiXianHua_Numbers < 1000){
        BaiWei = ShuiXianHua_Numbers / 100;
        ShiWei = (ShuiXianHua_Numbers  - BaiWei * 100) / 10;
        GeWei = ShuiXianHua_Numbers - ShiWei * 10 - BaiWei * 100;
        if ((BaiWei * BaiWei * BaiWei + ShiWei * ShiWei * ShiWei +
            GeWei * GeWei * GeWei) == ShuiXianHua_Numbers)
            cout << ShuiXianHua_Numbers << " ";
        ShuiXianHua_Numbers++;
    }
    return 0;
}
