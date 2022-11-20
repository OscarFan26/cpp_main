/* Written in WindowsSubsystemLinux */
/* Linux Ubuntu 18.04 -- GCC 11 -- C++20 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
          ----
回文子串(lpsB.cpp)
【题目描述】
给定一个字符串s，找到s中的所有回文子串(Palindromic Substring)；
只需输出回文子串的数目，并去掉重复的子串。

【输入格式】
一行，字符串s

【输出格式】
一个数字，表示回文子串个数

【样例输入】
bbbcaaa
【样例输出】
7
【样例解释】
一共7个不重复的回文子串，分别是：
a,b,c,aa,bb,aaa,bbb

【数据范围】
对于100%的数据:1<=|s|<=5000，且s仅仅含有小写字母。
    */
    string s;
    cin >> s;
    int n = s.size();
    // 去重 
    vector<string> v;
    for (int i = 0; i < n; i++) for (int j = i; j < n; j++) v.push_back(s.substr(i, j - i + 1));
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    // 判断回文
    int res = 0;
    
    // 超时
    // for (int i = 0; i < v.size(); i++){
    //     string t = v[i];
    //     int l = 0, r = t.size() - 1;
    //     while (l < r){
    //         if (t[l] != t[r]) break;
    //         l++, r--;
    //     }
    //     if (l >= r) res++;
    // }

    // cout << res << endl;

    // 中心扩展: 超时
    // 

    return 0;

}
