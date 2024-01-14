/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    题目描述：用两个队列实现一个栈(my_stack.cpp)
    小程同学手里只有两个队列，分别是queue1和queue2，但他手中没有栈，他突然冒出一个idea————使用两个队列实现一个栈，如何实现呢？经过分析，他得出如下结论:
    (1) 对于push指令(压栈操作)，分两种情况讨论:
        1) 若两个队列都为空，则把元素压入queue1
        2) 否则，压入不为空的队列
    (2) 对于pop指令(弹栈操作)，只有一种情况，那就是：找到不为空的队列，将它的所有元素依次弹出并压进第二个队列，直到它的元素个数为1
    也就是说，我们只需要模拟“两个队列来回倒腾”的过程，就能用两个队列实现一个栈
    举一个简单的例子，一开始，小程有两个空队列，分别是queue1和queue2，它们的状态是这样的：
    queue1: 空
    queue2: 空
    
    (1) 操作：将元素1进行压栈。由于两个队列都为空，所以直接压入queue1的队尾:
    queue1: 1
    queue2: 空
    (2) 操作：依次将元素2、3、4进行压栈。由于queue1不为空，queue2为空，所以依次压入queue1的队尾：
    queue1: 1 , 2 , 3 , 4
    queue2: 空
    (3) 操作：弹出栈顶元素。我们期待弹出元素4，但4在队尾，无法直接弹出，所以将queue1的前三个元素依次弹出、并压入queue1:
    queue1: 4
    queue2: 1 , 2 , 3
    此时，queue1只要一个元素4了，直接弹出4：
    queue1: 空
    queue2: 1 , 2 , 3
    (4) 操作：将元素5进行压栈。由于queue2不为空，queue1为空，所以讲5压入queue2的队尾：
    queue1: 空
    queue2: 1 , 2 , 3 , 5
    (5) 操作：查看栈顶元素。我们期待查看元素5，但5在队尾，无法查看，所以将queue2的前三个元素依次弹出、并压入queue2:
    queue1: 1 , 2 , 3
    queue2: 5
    这时候就可以查看栈顶元素5了，别忘了，查看完之后，将5也弹出并压入到queue1的队尾：
    queue1: 1 , 2 , 3 , 5
    queue2: 空
    
    小程同学不擅长编程，请你编程帮他实现这个功能，你的程序可以接受多条指令，并且可以根据指令输出对应的结果。
    给定Q条指令，每条指令单独占一行，根据对应的指令输出对应的结果，一共有6种不同的指令，指令描述如下：
    (1)push k
    push表示压栈操作，后面有一个空格和数字k，k表示要压栈的元素；push指令只需输出OK
    (2)pop
    pop表示弹栈操作，弹出栈顶元素并输出
    (3) size
    分别打印栈的长度size、queue1的长度size1、queue2的长度size2，用空格隔开
    (4) peek
    查看栈顶元素并输出
    (5) frontOne
    查看queue1的队首元素并输出，若queue1为空，输出0
    (6) frontTwo
    查看queue2的队首元素并输出，若queue2为空，输出0
    
    输入：第一行包含一个正整数Q(1<=Q<=1024)表示有Q条指令
          接下来有Q行，分别表示每条指令，其中，只有push指令后面有一个空格和数字k(1<=k<=65535)，其他指令不包含空格或数字
    输出：包含Q行，输出执行每条指令后的结果
    
    【样例输入】
    12
    push 1
    push 2
    push 3
    size
    peek
    pop
    push 4
    pop
    push 5
    frontOne
    frontTwo
    size
    
    【样例输出】
    OK
    OK
    OK
    3 3 0
    3
    3
    OK
    4
    OK
    0
    1
    3 0 3
    */
    int n;
    cin >> n;
    queue<int> q1, q2;
    while ( n ) {
        string s;
        cin >> s;
        if ( s == "push" ) {
            int x;
            cin >> x;
            if ( q1.empty() && q2.empty())
                q1.push(x);
            else if ( q1.empty() )
                q2.push(x);
            else if ( q2.empty() )
                q1.push(x);
            cout << "OK" << endl;
        } else if ( s == "pop" ) {
            if ( q1.empty() ) {
                while ( q2.size() > 1 ) {
                    q1.push(q2.front());
                    q2.pop();
                }
                cout << q2.front() << endl;
                q2.pop();
            } else {
                while ( q1.size() > 1 ) {
                    q2.push(q1.front());
                    q1.pop();
                }
                cout << q1.front() << endl;
                q1.pop();
            }
        } else if ( s == "size" ) {
            cout << q1.size() + q2.size() << " " << q1.size() << " " << q2.size() << endl;
        } else if ( s == "peek" ) {
            if ( q1.empty() ) {
                while ( q2.size() > 1 ) {
                    q1.push(q2.front());
                    q2.pop();
                }
                cout << q2.front() << endl;
                q1.push(q2.front());
                q2.pop();
            } else {
                while ( q1.size() > 1 ) {
                    q2.push(q1.front());
                    q1.pop();
                }
                cout << q1.front() << endl;
                q2.push(q1.front());
                q1.pop();
            }
        } else if ( s == "frontOne" ) {
            if ( q1.empty() ) {
                cout << 0 << endl;
            } else {
                cout << q1.front() << endl;
            }
        } else if ( s == "frontTwo" ) {
            if ( q2.empty() ) {
                cout << 0 << endl;
            } else {
                cout << q2.front() << endl;
            }
        }
        n--;
    }
    return 0;
}
