/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

struct famous_people {
    string name;
    int feelings = 0;
};


int get_seq_id(string name, int n, famous_people famous[]) {
    for (int i = 0; i < n; i++) {
        if (famous[i].name == name)
            return i;
    }
    return -1;
}

bool cmp(famous_people const a, famous_people const b) {
    return a.feelings > b.feelings ? true : false;
}

int main(){
    /*
        【问题描述】
        在LazyCat同学的影响下，Roby同学开始听韩国的音乐，并且越来越喜欢H.o.T，尤其喜欢安七炫和Tony。
        可是，爱学习爱思考的Roby司学想，如果以后喜欢的韩星越来越多怎么办呢?Roby怎么知道Roby最喜欢谁呢(Roby不知道谁知道呢……)? 于是，Roby同学求助于你。
        Roby首先会给你一张表，表上是所有他认识的韩星的名字，一开始他对所有韩星的好感度都为0。然后Roby会告诉你一些他对某个韩星的好感度变化。
        最后，请按照Roby对韩星好感从大到小的顺序输出他们。
        
        输入：
        第一行有一个整数N，表示Roby知道的韩星数目。
        下面有N行，表示每一个Roby认识的韩星的名字。
        接下来一行有一个整数K。
        再下面有2*K行，每两行为一组，上面一行为韩星的名字Name，下面一行为一个整数，表示好感度变化量Change。
        1<=N<=10000，-20000<=Change<=20000，K≤100000，名字长度在32以内
        
        输出：
        包括N*2行，依据韩星们的受Roby好感度从大到小的顺序输出，每两行为一组，第一行输出韩星的名字，第二行输出受Roby的好感度。
        
        【样例输入】:
        3
        HhlsaGay
        ZcLoveStudy
        Tony
        5
        ZcLoveStudy
        100
        Tony
        8888
        ZcLoveStudy
        20
        Tony
        8888
        HhlsaGay
        -1000
        
        
        【样例输出】:
        Tony
        17776
        ZcLoveStudy
        120
        HhlsaGay
        -1000
    */
    int n, k;
    cin >> n;
    famous_people famous[n];
    string t1;
    int s1;
    for (int i = 0; i < n; i++){
        cin >> t1;
        famous[i].name = t1;
    }
    t1 = "";
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> t1 >> s1;
        int seq = get_seq_id(t1, n, famous);
        famous[seq].feelings += s1;
    }
    sort(famous, famous + n, cmp);
    for (famous_people i : famous)
        cout << i.name << endl << i.feelings << endl;
    return 0;
}
