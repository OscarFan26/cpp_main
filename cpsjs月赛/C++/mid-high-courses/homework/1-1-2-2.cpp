/* Written in WindowsSubsystemLinux */
/* KaliLinux -- Clang++ 14 -- C++23 */
#include <bits/stdc++.h>
using namespace std;

struct programming_lang
{
    string name;
    int days;
};

int main()
{
    /*
    题目描述：小美是一名中学生，虽然是文科班的女生，但她对编程非常感兴趣，想利用业余时间学习编程语言，所以她买来很多的编程书籍，不过由于每个语言难度不同，所以学习周期也就不同，比如Java中等难度，需要21天精通，C++比较难，要30天才能精通，PHP超级简单，只需要1天就可以精通.......所以在开学当天，她看了一下整个学年的课程以及假期安排，统计出了假期的总天数。请你帮助小美安排最优学习顺序，使得她能在有限的假期内精通尽可能多的编程语言。
    输入描述：第一行有一个正整数N(1<=N<=10000),表示N门编程语言；N之后有一个空格，接下来有一个整数D(1<=D<=365)，D表示这一学年假期的总天数，接下来有N行，每一行都有编程语言的名字name(1<=name的长度<=32)，以及精通此编程语言所需的天数day，name和day之间用空格隔开。
    输出描述：第一行输出小美在本学年最多可以精通多少种编程语言(假设是K种)，接下来输出K行，表示所有符合条件的编程语言的名字，注意按照编程语言name的字典序从小到大输出。
    样例输入：
    6 100
    Java 21
    C++ 30
    C 25
    Python 15
    ObjectC 45
    PHP 1
    样例输出：
    5
    C
    C++
    Java
    PHP
    Python
    */
    programming_lang lang[1001];
    int types, days;
    cin >> types >> days;
    string name;
    int day;
    for (int i = 0; i < types; i++)
    {
        cin >> name >> day;
        lang[i].name = name;
        lang[i].days = day;
    }
    sort(lang, lang + types,
         [](programming_lang a, programming_lang b)
         { return a.days < b.days; });
    int used_days = 0, cnt = 0, ptr = 0;
    string list[types];
    while (true)
    {
        if (used_days >= days)
            break;
        used_days += lang[ptr].days;
        if (used_days >= days)
            break;
        ptr++;
        list[cnt] = lang[cnt].name;
        cnt++;
    }
    cout << cnt << endl;
    sort(list, list + cnt);
    for (int i = 0; i < cnt + 1; i++)
        cout << list[i] << endl;
    return 0;
}