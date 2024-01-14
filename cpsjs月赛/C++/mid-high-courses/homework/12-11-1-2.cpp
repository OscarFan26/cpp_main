/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    题目描述： 世界上最好的语言(best.cpp)
    小程同学刚刚考上大学，他虽然读的是中文系，但对编程非常感兴趣，于是去图书馆借来了N本编程语言的书。每本书的封面都有两个信息，分别是编程语言的名称以及此编程语言的好评程度，并且他把每本书从左往右依次排列在书架上。由于各种编程语言的好评程度不同，所以小程并不想按照从左往右的次序学习这些编程语言，他的策略是这样的：
    (1)如果书架上只剩下一本书，那么只能从书架上取出这本书进行学习
    (2)如果书架上剩下至少两本书，那么他从最左边取出两本书L1、L2，然后比较L1与L2的好评程度，小程将学习好评程度较高的编程语言，并且将另一本书放回书架的最右边。
    若L1与L2的好评程度相同，秉着“先入为主”的原则，他将优先学习L1，并将L2放回书架的最右边。

    举个例子,小程借来6本编程语言的书，并用(编程语言，好评程度)代表每本书，则一开始书架上的书是这样排列的(从左往右):
    (C 3),(C++,5),(Java 4),(Python 3),(PHP 1),(ObjectC 2)
    步骤1:从书架上取出两本书(C 3),(C++,5)，由于C++的好评程度高于C，所以优先学习C++，并将C放回书架的最右边，此时书架上书的排列为：
    (Java 4),(Python 3),(PHP 1),(ObjectC 2),(C 3)
    步骤2:从书架上取出两本书(Java 4),(Python 3)，由于Java的好评程度高于Python，所以优先学习Java，并将Python放回书架的最右边，此时书架上书的排列为：
    (PHP 1),(ObjectC 2),(C 3),(Python 3)
    步骤3:从书架上取出两本书(PHP 1),(ObjectC 2)，由于ObjectC的好评程度高于PHP，所以优先学习ObjectC，并将PHP放回书架的最右边，此时书架上书的排列为：
    (C 3),(Python 3),(PHP 1)
    步骤4:从书架上取出两本书(C 3),(Python 3)，这两本书的好评程度相同，但C是先取出的，所以优先学习C，并将Python放回书架的最右边，此时书架上书的排列为：
    (PHP 1),(Python 3)
    步骤5:从书架上取出两本书(PHP 1),(Python 3)，由于Python的好评程度高于PHP，所以优先学习Python，并将PHP放回书架的最右边，此时书架上书的排列为：
    (PHP 1)
    步骤6:只有一本书了，所以只能学习PHP
    (PHP 1)
    我们可以看到，小程学习的第一门语言是C++，最后学习的是PHP，所以毫无疑问————世界上最差的语言是PHP，原来C++才是世界上最好的语言啊!

    输入：
    第一行一个正整数N(1<=N<=100)，N表示小程借来多少本编程语言的书
    接下来是N行，表示书架上N本书的信息，每一行包含两个信息，分别是书的名字name(1<=name的长度<=20)以及此编程语言的好评程度good(1<=good<=5)，name与good之间用空格隔开
    输出：
    Q行，每一行都输出编程语言名称，表示小程的学习顺序

    【样例输入】:
    6
    C 3
    C++ 5
    Java 4
    Python 3
    PHP 1
    ObjectC 2

    【样例输出】:
    C++
    Java
    ObjectC
    C
    Python
    PHP
    */
    int n;
    cin >> n;
    // queue做法
    queue<pair<string, int>> q;
    for (int i = 0; i < n; i++) {
        string name;
        int good;
        cin >> name >> good;
        q.push(make_pair(name, good));
    }
    while (q.size() > 1) {
        auto a = q.front();
        q.pop();
        auto b = q.front();
        q.pop();
        if (a.second > b.second) {
            cout << a.first << endl;
            q.push(b);
        } else if (a.second < b.second) {
            cout << b.first << endl;
            q.push(a);
        } else {
            cout << a.first << endl;
            q.push(b);
        }
    }
    cout << q.front().first << endl;
    
    return 0;
}
