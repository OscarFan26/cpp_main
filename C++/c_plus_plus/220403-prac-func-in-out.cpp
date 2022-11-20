//
// Created by Oscar Fan on 2022/4/3.
//
#include <iostream>
using namespace std;

int func(int x, int y){
    y = int(x+y+x-y+x*y+x/y);
    return y;
}
int another(int &z, int &a){
    a = int(z+a+z-a+z*a+z/a);
    return a;
}


int main(){
    int z = 10, a = 2, x=20;
    cout << func(x, 9) << endl << x << endl;
    cout << another(z, a) << endl << a;
    return 0;
}
