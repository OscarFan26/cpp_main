/*
我们各位数字单调不降的整数是上升数。例如：
、1234
、89
 都是上升数，而 
、101
 不是上升数。

给出一个整数 
，求出 
 最少可以写成多少个上升数的和。*/
 // 80 = 3 + 77, 2
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

const int N = 1e5 + 10;
int a[N];
int main() {
freopen("inumber.in", "r", stdin);
freopen("inumber.out", "w", stdout);
    int n;
    cin >> n;
    int cnt = 0;
    while (n) {
        a[cnt++] = n % 10;
        n /= 10;
    }
    reverse(a, a + cnt);
    int res = 0;
    for (int i = 0; i < cnt; i++) {
        if (a[i] == 0) continue;
        res++;
        for (int j = i + 1; j < cnt; j++) a[j] = 9;
    }
    cout << res << endl;
    return 0;
fclose(stdin);
fclose(stdout);
}