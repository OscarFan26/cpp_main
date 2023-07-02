/*
倍增：成倍的增加
[L,R] 求这个区间的最大值
线段树，树状数组
st表：求区间统计
10 3
1 2 4 9 7 1 7 6 2 9
1 10
4 6
5 9

9 9 7
*/
#include <bits/stdc++.h>
#define maxn 100005
using namespace std;
/*
[i][j]表示的范围:i元素为起点，长度为2^j的一个区间   p[i][j]就是该区间的最大值
p[1][2]: [1,2,4,9]   p[3][1]:[4,9]    p[1][0]==[1]
p[6][0]:[9]
p[5][2]:[10,9,7,6]*/
int  a[maxn], p[maxn][21];
int  n, m;
void create_st() {
    for (int j = 1; (1 << j) <= n; j++) {  // j=2,i=1   p[1][2]=[1,2,4,9] =9       p[1][1]=2  p[3][1]=9 O(nlgn)
        for (int i = 1; i <= n + 1 - (1 << j); i++) {
            p[i][j] = max(p[i][j - 1], p[i + (1 << (j - 1))][j - 1]);
            //           2   9
            // p[1][1]=  max(a[1],a[2]);
        }
    }
}
int query(int l, int r) {     // O(1)
    int k = log2(r - l + 1);  // log(r-l+1)/log(2.0);
    return max(p[l][k], p[r - (1 << k) + 1][k]);
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) p[i][0] = a[i];
    create_st();
    for (int j = 1; j <= m; j++) {  // O(nm)
        int L, R;
        cin >> L >> R;
        int maxx = -2147483648;
        maxx     = max(maxx, query(L, R));
        cout << maxx << endl;
    }

    return 0;
}
