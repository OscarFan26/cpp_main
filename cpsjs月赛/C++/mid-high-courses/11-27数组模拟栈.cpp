/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <iostream>
using namespace std;

int stack[1001];
int top = 0, n = 10;

void push(int x) {
    if (top < n) {
        top++;
        stack[top] = x;
        return;
    }
}

void pop() {
    if (top > 0)
        top--;

}

int getTop() { return stack[top]; }

void clear() { top = 0; }

int main(){
    /*数组模拟栈*/
    for (int i = 1; i <= 5; i++)
        push(i);
    cout << getTop() << endl;
    pop();
    cout << top << " " << getTop() << endl;
    clear();
    cout << top << endl;
    return 0;
}
