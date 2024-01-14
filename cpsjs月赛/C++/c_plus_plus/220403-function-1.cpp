//
// Created by Oscar Fan on 2022/4/3.
//
#include <iostream>
using namespace std;

/*
 * How to create a function?
 *
 * type name(args...){
 *      something...
 *      return something;
 * }
 *
 * CAUTION: something can be expr(s) or var(s)
 * CAUTION: if type is void, then you CAN not need to
 *          return anything.
 * OTHERWISE, type should be <int, char...>
 * CAUTION: you can choose not to write args, according to
 *          the function.
 * WARNING: you must define the function
 *          before the MAIN FUNCTION!
 * */

/*
 * How to use a funtion?
 *
 * name(args...);
 *
 * name refers to the function name,
 * args refers to the function's arguments.
 * If there are no arguments, just use name();
 * That is all right.
 * CAUTION: You need to keep the type same with the return type
 *          of the functions.
 *          LIKE:
 *   > return 1+2;   // int
 *    ...
 *   > int a = add() // 3 = 1+2
 *
 * */



// I want to add two numbers and return it, so I can create a
// function.
int multi(int x, int y){ return x * y; }  // it is a function

void print(){ cout << "********" << endl; }  // decoration function

int main(){
    int a, b;
    cin >> a >> b;
    print(); // trust me it is only a little decoration
    cout << multi(a, b) << endl;  // use the add function here
    print(); // see line 16
    return 0;
}



