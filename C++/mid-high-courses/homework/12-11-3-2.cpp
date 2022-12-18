/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    题目描述：用两个栈实现一个队列(my_queue.cpp)
    小童同学手里只有两个栈，分别是stack1和stack2，但他手中没有队列，他突然冒出一个idea————使用两个栈实现一个队列，如何实现呢？经过分析，他得出如下结论:
    (1) 对于push指令(入队操作，将元素压进队尾)，无论stack1、stack2是否为空，总是将元素压进stack1。
    (2) 对于pop指令(出队操作，弹出队首元素，分为如下两种情况进行讨论：
        1) 若stack2为空，首先将stack1中的元素依次弹出、并依次压进stack2，然后再弹出stack2的栈顶元素。
        2) 若stack2不为空，则直接弹出stack2的栈顶元素作为出队元素。

    小童同学不擅长编程，请你编程帮他实现这个功能，你的程序可以接受多条指令，并且可以根据指令输出对应的结果。
    给定Q条指令，每条指令单独占一行，根据对应的指令输出对应的结果，一共有6种不同的指令，指令描述如下：
    (1)push k
    push表示入队操作，后面有一个空格和数字k，k表示要入队的元素；push指令只需输出OK
    (2)pop
    pop表示出队操作，弹出队首元素并输出
    (3) size
    分别打印队列的长度size、stack1的长度size1、stack2的长度size2，用空格隔开
    (4) peek
    查看队首元素并输出
    (5) topOne
    查看stack1的栈顶元素并输出，若stack1为空，输出0
    (6) topTwo
    查看stack2的栈顶元素并输出，若stack2为空，输出0

    例如，我们需要执行10条指令，现在分析这10条指令的执行过程以及两个栈的状态。
    初始状态:
    stack1: 空
    stack2: 空
    (1) push 1；将元素1压入队列，我们可以直接将1压入stack1:
    stack1: 1
    stack2: 空
    (2) push 2；将元素2压入队列，我们可以直接将2压入stack1:
    stack1: 1 , 2
    stack2: 空
    (3) push 3；将元素3压入队列，我们可以直接将3压入stack1:
    stack1: 1 , 2 , 3
    stack2: 空
    (4) peek；查看队首元素，由于stack2为空，所以要将stack1中的所有元素依次弹出并压进stack2，此时栈的状态为:
    stack1: 空
    stack2: 3 , 2 , 1
    接下来就可以查看栈顶元素1了，1作为队列的队首元素
    (5) pop；弹出队首元素，由于stack2不为空，所以直接弹出元素1作为结果，此时栈的状态为:
    stack1: 空
    stack2: 3 , 2
    (6) push 4；将元素4压入队列，我们可以直接将4压入stack1:
    stack1: 4
    stack2: 3 , 2
    (7) size；分别查看队列的长度、stack1的长度、stack2的长度，显然stack1的长度为1，stack2的长度为2，队列的长度为3(因为1+2=3)，且栈的状态并不发生改变
    (8) push 5；将元素3压入队列，我们可以直接将5压入stack1:
    stack1: 4 , 5
    stack2: 3 , 2
    (9) topOne；查看stack1的栈顶元素，显然是5，且栈的状态并不发生改变
    (10) topTwo；查看stack2的栈顶元素，显然是2，且栈的状态并不发生改变

    输入：第一行包含一个正整数Q(1<=Q<=1024)表示有Q条指令
        接下来有Q行，分别表示每条指令，其中，只有push指令后面有一个空格和数字k(1<=k<=65535)，其他指令不包含空格或数字
    输出：包含Q行，输出执行每条指令后的结果
    【样例输入】
    10
    push 1
    push 2
    push 3
    peek
    pop
    push 4
    size
    push 5
    topOne
    topTwo

    【样例输出】
    OK
    OK
    OK
    1
    1
    OK
    3 1 2
    OK
    5
    2
    */
    int q;
    // 两栈=一队列
    stack<int> stack1, stack2;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        if (s == "push") {
            int k;
            cin >> k;
            stack1.push(k);
            cout << "OK" << endl;
        } else if (s == "pop") {
            if (stack2.empty()) {
                while (!stack1.empty()) {
                    stack2.push(stack1.top());
                    stack1.pop();
                }
            }
            if (stack2.empty()) {
                cout << "error" << endl;
            } else {
                cout << stack2.top() << endl;
                stack2.pop();
            }
        } else if (s == "size") {
            cout << stack1.size() + stack2.size() << " " << stack1.size() << " " << stack2.size() << endl;
        } else if (s == "peek") {
            if (stack2.empty()) {
                while (!stack1.empty()) {
                    stack2.push(stack1.top());
                    stack1.pop();
                }
            }
            if (stack2.empty()) {
                cout << "error" << endl;
            } else {
                cout << stack2.top() << endl;
            }
        } else if (s == "topOne") {
            if (stack1.empty()) {
                cout << "0" << endl;
            } else {
                cout << stack1.top() << endl;
            }
        } else if (s == "topTwo") {
            if (stack2.empty()) {
                cout << "0" << endl;
            } else {
                cout << stack2.top() << endl;
            }
        }
    }
    

    return 0;
}
