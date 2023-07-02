/*
ST表：区间查询
n个整数，m次查询，[l,r],输出该区间的最大值。
n,m<10^6,整数int32.
10  5
1 2 4 -1 9 10 6 8 100 21
1 5
2 3
1 10
7 7
5 8
输出：
9 4  100 6 10
*/
#include <bits/stdc++.h>
#include <cmath>
#define maxn 1000005
using namespace std;
int n, m, a[maxn], p[maxn][21];  //	p数组保留区间最值
// 倍增：1,2,4,8，。。。。。
void create_st() {
    for (int i = 1; i <= n; i++) p[i][0] = a[i];  // 0==2^0 1==2^1   代表的是区间长度  区间[i,i] [10,10]
    // p[1][1]  1 2^1  [1,2]   p[1][2]   区间长度是2^2=4  [1,4]
    for (int j = 1; (1 << j) <= n; j++)              // 区间长度
        for (int i = 1; i <= n + 1 - (1 << j); i++)  // 区间长度2^j   p[1][0]=a[1]  p[2][0]=a[2]  p[1][1]=max(p[1][0],p[2][0]) p[2][1]
            p[i][j] = max(p[i][j - 1], p[i + (1 << (j - 1))][j - 1]);
}
int query_st(int l, int r) {
    int k = int(log(r - l + 1) / log(2.0));  // k=log2(r-l+1);//对数 2^k=n  log2n=k
    return max(p[l][k], p[r + 1 - (1 << k)][k]);
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    create_st();

    for (int i = 1; i <= m; i++) {
        int L, R;
        cin >> L >> R;
        cout << query_st(L, R) << ' ';
    }

    /*
    for(int i=1;i<=m;i++){
        int L,R;
        cin>>L>>R;
        int maxx=-2147483648;
        for(int j=L;j<=R;j++)
            maxx=max(maxx,a[j]);
        if(i<m)
            cout<<maxx<<' ';
        else
            cout<<maxx<<endl;
    } */
    return 0;
}
