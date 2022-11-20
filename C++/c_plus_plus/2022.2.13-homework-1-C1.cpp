//
// Created by Oscar Fan on 2022/2/13.
//
#include <iostream>
using namespace std;
int main(){
    int i=100;
    int count=0;
    while(i>0){
        if(i%2==0){
            count++;
        }
        i--;
    }
    cout<<count<<endl;
    return 0;
}