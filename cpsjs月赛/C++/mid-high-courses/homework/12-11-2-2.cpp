/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    题目描述：宠物店(pet.cpp)
    小美同学看见街上有很多的流浪猫、流浪狗，非常可怜，于是她想开一个宠物店来收养这些猫咪和狗狗，所以她在市中心租了一间屋子，并把附近的猫咪和狗狗都收集了过来。
    经过了一个星期的装修和准备，宠物店高调开张了，吸引了很多顾客，不少顾客都想领养一只宠物回家。由于资金不足的问题，小美制定了如下领养规则：
    领养人有两种收养方式，第一种为既收养最早进入宠物店的猫(如果有)，也收养最早进入宠物店的狗(如果有)
    第二种为选择收养的动物类型（猫或狗），并收养该种动物中最早进入宠物店的(猫或狗)

    由于宠物越来越多、顾客也越来越多，这可难倒了小美，请你使用队列的知识模拟宠物店，并帮助小美完成收养、顾客完成领养的过程，使得宠物店能够正常运营。具体规则如下：
    1). 调用 add 方法,表示小美将 cat 或者 dog 放入队列中
    2). 调用 pollAll 方法，表示顾客从队列中弹出最早进入队列的cat 和 dog
    3). 调用 pollDog 方法，表示顾客从队列中弹出最早进入 dog
    4). 调用 pollCat 方法，表示顾客从队列中弹出最早进入 dog
    5). 调用 isEmpty 方法检查队列中是否还有 dog 或 cat
    6). 调用 isDogEmpty 方法检查队列中是否还有 dog
    7). 调用 isCatEmpty 方法检查队列中是否还有 cat

    输入：
    第一行输入一个整数 n(1<=n<=10000) 表示 用户的操作总次数。
    以下 n行 每行表示用户的一次操作
    每行的第一个参数为一个字符串 s，若 s = "add"， 则后面接着有 "cat x"（表示猫）或者"dog x"（表示狗），其中的 x(1<=x<=10000) 表示猫狗的编号

    输出：
    对于每个操作：
    若为 "add"，则输出"OK"
    以下仅列举几个代表操作，其它类似的操作输出同理。
    若为 "pollAll"，从队列中弹出最早进入队列的cat 和 dog, 注意先输出cat再输出dog，格式见样例。
    若为 "isEmpty"，则检查队列中是否还有 dog 或 cat， 为空则输出 "yes"， 否则输出 "no"。

    【样例输入】:
    11
    add cat 1
    add dog 2
    pollAll
    isEmpty
    add cat 5
    isDogEmpty
    pollCat
    add dog 10
    add cat 199
    pollDog
    pollAll

    【样例输出】:
    OK
    OK
    cat 1
    dog 2
    yes
    OK
    yes
    cat 5
    OK
    OK
    dog 10
    cat 199*/
    int n;
    // queue做法
    queue<int> cat, dog;
    queue<pair<int, int>> all;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "add")
        {
            string t;
            int x;
            cin >> t >> x;
            if (t == "cat")
            {
                cat.push(x);
                all.push({1, x});
            }
            else
            {
                dog.push(x);
                all.push({2, x});
            }
            cout << "OK" << endl;
        }
        else if (s == "pollAll")
        {
            if (all.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
                if (!cat.empty())
                {
                    cout << "cat " << cat.front() << endl;
                    cat.pop();
                    all.pop();
                }
                else if (!dog.empty())
                {
                    cout << "dog " << dog.front() << endl;
                    dog.pop();
                    all.pop();
                }
            }
        }
        else if (s == "pollCat")
        {
            if (cat.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
                cout << "cat " << cat.front() << endl;
                cat.pop();
                all.pop();
            }
        }
        else if (s == "pollDog")
        {
            if (dog.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
                cout << "dog " << dog.front() << endl;
                dog.pop();
                all.pop();
            }
        }
        else if (s == "isEmpty")
        {
            if (all.empty())
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else if (s == "isDogEmpty")
        {
            if (dog.empty())
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else if (s == "isCatEmpty")
        {
            if (cat.empty())
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}