/*
 * @OscarFan 制作 : 
 * @Date: 2022-05-22 09:59:24
 * @Have a good day forever~~~: ::python::cpp::js::html::css::bash???
 */
#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int sum;

int add_continually(int border_num){
    /*
    ===================================================
    Description:
        Add A Number Continually
    Example:
        1+2+3+....+n
    ===================================================
    +--------------------------------------------------+
    |                    Parameters                    |
    +--------------------------------------------------+
    |   border_num    |   An integer that is the limit |   
    |  =>    INT      |   of the recursion             |
    +--------------------------------------------------+
    ====================================================
    +--------------------------------------------------+
    |                    Returns                       |
    +--------------------------------------------------+
    |   1st          |   Return the sum of the sum     |   
    | =>     INT     |   which it adds continually|
    +--------------------------------------------------+ 
    
    */
    if (border_num == 1) return 1;
    else { 
        sum += (border_num - 1);
        add_continually(border_num - 1);
        return sum;
    }
}

int main(){
    // 累加 1+2+3+4+.....+n
    int num;
    cin >> num;
    sum = num;
    cout << add_continually(num);
    return 0;
}