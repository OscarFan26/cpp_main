/* WindowsSubsystemLinux - Kali-Linux */
/* C++23 - CLANG++ 18 - CLANGD SUPPTD */
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
        骰子王(shaizi.cpp)
    
    【题目描述】
    Farmer-John的奶牛Green觉得每天吃草和挤奶很无聊，于是私下里拿出三个标有1点~6点的骰子，玩起了扔骰子游戏。
    游戏的规则如下：
    1、若三个骰子点数一样，则是豹子，比如: 5 5 5;
    2、若三个骰子练成三个连续的数字，则是顺子，比如：2 3 4
    3、若两个骰子点数一样，而另外一个不一样，则是对子，比如：2 2 1;
    4、若三个骰子点数都不一样，则是单牌，比如：1 4 5;
    Green扔了N次骰子，但却不知道每次扔完之后的结果是什么，请你写程序帮助它进行判断。
    【输入格式】
    第一行有一个数字N，表示扔骰子的次数;
    接下来N行，每行三个正整数a1、a2、a3，用空格隔开，分别表示三个骰子的点数。
    【输出格式】
    N行，规则如下：
    1、若是豹子，输出1
    2、若是顺子，输出2
    3、若是对子，输出3
    4、若是单牌，输出4
    【样例输入】
    4
    5 5 5
    2 4 3
    2 1 2
    1 4 5
    【样例输出】
    1
    2
    3
    4
    【数据范围】
    对于100%的数据：1<=N<=100,1<=a1,a2,a3<=6
    */
    int n;
    cin >> n;
    int data[100][3];
    for (int i = 0; i < n; i++) cin >> data[i][0] >> data[i][1] >> data[i][2];
    for (int i = 0; i < n ; i++) {
        if (data[i][0] == data[i][1] && data[i][0] == data[i][2]) { cout << 1 << endl; continue; }
        if (data[i][0] == data[i][1] ||
            data[i][0] == data[i][2] ||
            data[i][1] == data[i][2]) {
            cout << 3 << endl;
            continue;
        }
        sort(data[i], data[i] + 3);
        if (data[i][0] + 1 == data[i][1] && data[i][1] + 1 == data[i][2]) {cout << 2 << endl;
            continue;
        }
        if (data[i][0] != data[i][1] && data[i][0] != data[i][2] && data[i][1] != data[i][2]) {
            cout << 4 << endl;
            continue;
        }
    }
    return 0;
}
