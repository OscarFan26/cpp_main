/*
 * @OscarFan 制作 : 
 * @Date: 2022-05-22 11:50:19
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int factory(int limit){
    if (limit == 1) return 1;
    else return limit*factory(limit-1); 
}

int main(){
    // factory
    int number;
    cin >> number;
    cout << factory(number);
    return 0;
}