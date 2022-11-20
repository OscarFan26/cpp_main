/*
 * @OscarFan 制作 : 
 * @Date: 2022-05-22 09:11:20
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int cnt = 0;

void recursion(){
    cout << "recursion" << endl;
    cnt++;
    if (cnt > 10){
        return;
    }
    recursion();

}


int main(){
    // recursion
    recursion();


    return 0;
}